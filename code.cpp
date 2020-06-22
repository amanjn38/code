#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "CarClass.cpp"
#include "login.cpp"
using namespace std;

int main()
{
    bool loginStatus = false;
    bool registerStatus = false;
    Login l1;
    
    while(1)
    {
        system("clear");
        string username, password;
        int ch;

        cout<<" ********  Welcome to SMS ********* ";
        cout<<"\n 1. Login \n 2. Register \n3. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<" Username : "; 
                cin >> username;    //Username shall be without spaces
                cout<<" Password : "; 
                cin >> password;    //Passwords shall be without spaces
                loginStatus = l1.login(username, password);
                cout << loginStatus;
                break;
            case 2:
                registerStatus = l1.Register();
                break;
            case 3:
                exit(1);
        }
        if(loginStatus || registerStatus) {
            break;
        }
    } 

    if(loginStatus){
        CarClass obj;
        if (l1.role == 1) {
            int i;
            // rental r;
            int op,op1,op2,op3;
            int temp[5];
            cout<<"======================================"<<endl;
            cout<<"=                                    ="<<endl;
            cout<<"=        MAC CAR RENTALS             ="<<endl;
            cout<<"=  THE ROYAL ESSENCE OF JOURNEY      ="<<endl;
            cout<<"=                                    ="<<endl;
            cout<<"======================================"<<endl;
            cout<<endl<<"***** MOVE YOUR BOOKING TODAY ******"<<endl<<endl;

            obj.menu1();

            obj.endF();
        } else if (l1.role == 2) {
            obj.printOrders();
        }
    }

    return 0;
}
