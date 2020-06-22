#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Login {
    string username;
    string password;
    public: unsigned int role;
        
    public:
    
    int Register() {
        ofstream fs("logindata.txt", ios::app | ios::binary);   
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter password: ";
        cin>>password;
        cout<<"Press 1. Customer 2. Admin "<<endl;
        cin>>role;
        fs<<username<<" "<<password<<" "<<role<<" ";   
        fs.close();
        return 1;
    }

    bool login(string input_username, string input_password) {
        bool valid = false;
        ifstream fs("logindata.txt", ios::in);
        while(!fs.eof()) {
            fs >> username >> password >> role;   

            if(username == input_username && password == input_password) {
                valid = true;
                if(role==1)
                {
                    cout<<"Welcome to Customer : "<<username << endl;
                }
                else if(role==2)
                {
                    cout<<"Welcome to Admin : "<<username << endl;
                }
                
            } else {
                continue;
            }
        }
        fs.close();   
        return valid;
    }
};
