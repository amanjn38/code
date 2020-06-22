#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Login {
    char username[50];
    char password[50];
    unsigned int role;
        
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

    int login(char un[],char pw[]) {
        int valid = 0;
        ifstream fs("logindata.txt",ios::in);
        while(!fs.eof()) {
            fs >> username >> password >> role;   

            if(strcmp(un, username) == 0 && strcmp(pw, password) == 0) {
                valid = 1;
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
