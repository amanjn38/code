#include <iostream>
#include <stdio.h>
#include<math.h>
#include <string.h>
using namespace std;


struct car {
    string model;
    string color;
    int year;
    double cost;
    bool isAvailable = true;
};

struct rental {
    car carSelected;
    string dates;
    int driver;
    int days;
    int cost;
};
struct customer {
	string name;
	string email;
	string address;
	string cnic;
	string friend_email;
};

struct driver{
    string name;
    int age;
    int exprience;
    string contact_num;
    bool isAvailable = true;
};


void printCar(car c) {
    if(c.isAvailable == true){
        cout<<c.model<<" ";
        cout<<c.year<<" ";
        cout<<c.color;
        cout<<endl;
    }
}

void printDriver(driver drivers){
	if(drivers.isAvailable == true){
		cout<<"Driver Name: "<<drivers.name<<endl;
		cout<<"Driver Age: "<<drivers.age<<endl;
		cout<<"Driver Exprience: "<<drivers.exprience<<endl;
		cout<<"Driver Contact Num: "<<drivers.contact_num<<endl;
	}
}


double calcCost(car c, int driver, int days) {
    double cost=c.cost*days;
    printCar(c);
    cout<<"Per day: $"<<c.cost<<" x "<<days<<" days = $"<<cost<<endl;
    if (driver) {
        cout<<"Driver cost $100 per day "<<" x "<<days<<" days = $"<<100*days<<endl;
        cost+=100*days;
    }
    cout<<"Total Cost: $"<<cost<<endl;
    return cost;
}

car cars[10];
driver drivers[10];
customer cust[10];

void intializeCars(){
    cars[0].model = "Lexus IS 220d";
    cars[0].color = "Black";
    cars[0].year = 2018;
    cars[0].cost = 33.0;
    cars[0].isAvailable = true;

    cars[1].model = "Audi A3";
    cars[1].color = "White";
    cars[1].year = 2017;
    cars[1].cost = 34.0;
    cars[1].isAvailable = true;

    cars[2].model = "Mercedes Benz X800";
    cars[2].color = "Yellow";
    cars[2].year = 2015;
    cars[2].cost = 23.0;
    cars[2].isAvailable = true;

    cars[3].model = "Honda Civic";
    cars[3].color = "Pink";
    cars[3].year = 2016;
    cars[3].cost = 36.0;
    cars[3].isAvailable = true;

    cars[4].model = "Toyota V8";
    cars[4].color = "Red";
    cars[4].year = 2011;
    cars[4].cost = 23.0;
    cars[4].isAvailable = true;

    cars[5].model = "Suzuki Cultus";
    cars[5].color = "White";
    cars[5].year = 2016;
    cars[5].cost = 23.0;
    cars[5].isAvailable = true;

    cars[6].model = "Toyota Corolla";
    cars[6].color = "White";
    cars[6].year = 2011;
    cars[6].cost = 23.0;
    cars[6].isAvailable = true;

    cars[7].model = "Toyota Vitz";
    cars[7].color = "Red";
    cars[7].year = 2015;
    cars[7].cost = 23.0;
    cars[7].isAvailable = true;

    cars[8].model = "Daihatsu Alto";
    cars[8].color = "Red";
    cars[8].year = 2013;
    cars[8].cost = 23.0;
    cars[8].isAvailable = true;

    cars[9].model = "Honda City";
    cars[9].color = "Red";
    cars[9].year = 2013;
    cars[9].cost = 23.0;
    cars[9].isAvailable = true;

}

void initializeDrivers(){
    drivers[0].name = "John";
    drivers[0].age = 35;
    drivers[0].contact_num = "03147312345";
    drivers[0].exprience = 15;
    drivers[0].isAvailable = true;

    drivers[1].name = "Kanvy";
    drivers[1].age = 40;
    drivers[1].contact_num = "03147312345";
    drivers[1].exprience = 12;
    drivers[1].isAvailable = true;

    drivers[2].name = "Josh";
    drivers[2].age = 45;
    drivers[2].contact_num = "03147312345";
    drivers[2].exprience = 20;
    drivers[2].isAvailable = true;

    drivers[3].name = "Ahmed";
    drivers[3].age = 38;
    drivers[3].contact_num = "03147312345";
    drivers[3].exprience = 20;
    drivers[4].isAvailable = true;

    drivers[4].name = "Ali";
    drivers[4].age = 42;
    drivers[4].contact_num = "03147312345";
    drivers[4].exprience = 18;
    drivers[4].isAvailable = true;

    
}

int main()
{

    initializeDrivers();
    intializeCars();
    int i;
    rental r;
    int op,op1,op2,op3;
    int temp[5];
    cout<<"======================================"<<endl;
    cout<<"=                                    ="<<endl;
    cout<<"=        MAC CAR RENTALS             ="<<endl;
    cout<<"=  THE ROYAL ESSENCE OF JOURNEY      ="<<endl;
    cout<<"=                                    ="<<endl;
    cout<<"======================================"<<endl;

    cout<<endl<<"***** MOVE YOUR BOOKING TODAY ******"<<endl<<endl;
label:
    int category;
    while(true) {
        cout<<"Please Select"<<endl;
        cout<<"1 - Economic Class"<<endl;
        cout<<"2 - Business Class"<<endl;
        cin>>category;
        if(category == 1 || category == 2)
            break;
    }

    if(category == 1)
	{
        cout<<endl<<"*** ECONOMIC CLASS OPTIONS ***"<<endl<<endl;
        for (int j=1,i=5;i<10;i++)
		{
        	if(cars[i].isAvailable == true)
            cout<<j<<" ";
            printCar(cars[i]);
            j++;
        }
        
        
        cout<<endl<<"Please Select your Car Option."<<endl;
        label7:
        cin>>op;
        while(true)
        {
        	if(op>=1 && op<=5)
        	break;
        	else
        	cout<<"Please enter valid option: ";
        	goto label7;
		}
        if(cars[op+4].isAvailable == false)
        {
        	cout<<"Already booked please enter valid option: ";
        	goto label7;
		}
        cout<<endl<<"You selected: ";

        r.carSelected=cars[op+4];
        printCar(r.carSelected);


        cout<<endl<<"Do you need a driver? 1 for yes, or press 0 for no: "<<endl;
        label5:
        cin>>r.driver;
        while(true)
        if(r.driver==1 || r.driver==0)
        {
        	break;
		}
		else
		{
			cout<<"Enter valid option: ";
			goto label5;
		}
        if(r.driver==1)
		{
        	cout<<"Drivers Avliable Right Now\n";
        	label2:
        	for(int j=1,i=0;i<5;i++)   // for showing drivers info
        	{
        		if(drivers[i].isAvailable == true)
        		{
				
        		cout<<"______________________________"<<endl;
        		cout<<j<<" ";
        	    printDriver(drivers[i]);
        		cout<<"______________________________"<<endl;
        	    }
        	    j++;
			}
			cout<<"Please Select Your Driver: ";
			label10:
			cin>>op1;
			if(op1>5){cout<<endl;
				cout<<"Please Enter Valid Option: "<<endl;
				goto label2;
			}
            if(drivers[op1-1].isAvailable == false)
            {
        	cout<<"Already booked driver please enter valid option: ";
        	goto label10;
		    }
		}
		cout<<"\n*********Enter your personal details.*********\n";
		cout<<"Enter Your Name: ";
		int temp3=0;
		cin>>cust[temp3].name;
		cout<<"Enter your email address: ";
		cin>>cust[temp3].email;
		cout<<"Enter your CNIC: ";
		cin>>cust[temp3].cnic;
		cout<<"Enter your address: ";
		cin>>cust[temp3].address;

        cout<<endl<<"Number of days: "<<endl;
        cin>>r.days;
        cout<<"Please enter the date for the booking: "<<endl;
        cin>>r.dates;
        cout<<"You entered date: "<<r.dates<<endl;

        cout<<endl<<"Confirm name for the booking: "<<endl;
        cin>>cust[temp3].name;

        cout<<"=============================================\n";
        cout<<"               Your Final Bill               \n\n";
        cout<<"Your Name: "<<cust[temp3].name<<endl<<endl;
        cout<<"Your Booked Car: ";
        printCar(cars[op+4]);
        cout<<"         *********Your Driver*********\n\n";
        if(op1==1)
        printDriver(drivers[op1-1]);
        else
        cout<<">You have not selected any driver.\n\n";
        cout<<"      *********Your Final Charges*********\n\n";
        calcCost(r.carSelected, r.driver, r.days);
        cout<<"=============================================\n";
        cout<<"We've sent booking details to your contact number.\n";
        cout<<endl<<"THANK YOU, "<<cust[0].name<<endl;
        cout<<"\nPlease enter your friend email, if you want to share your booking information with friend? Press 1 for yes, 0 for no\n";
        int temp6;
        label21:
        cin>>temp6;
        while(true)
        {
        	if(temp6==1)
        	{
        	cout<<"Email: ";
			cin>>cust[temp3].friend_email;
        	break;
			}
        	else if(temp6==0)
        	break;
        	else
        	cout<<"Please enter valid input: ";
        	goto label21;
        	break;
		}

        drivers[op1-1].isAvailable = false;
        cars[op+4].isAvailable = false;
        temp3++;
    }
    else if(category == 2)
	{
        cout<<endl<<"*** BUSINESS CLASS OPTIONS ***"<<endl;
        for (i=0;i<5;i++) {
        	if(cars[i].isAvailable == true)
            cout<<(i+1)<<" ";
            printCar(cars[i]);
        }
        cout<<"Please enter your option."<<endl;
        label8:
        cin>>op2;
        while(true)
        {
        	if(op2>=1 && op2<=5)
        	break;
        	else
        	cout<<"Please enter valid option: ";
        	goto label8;
		}
        if(cars[op2-1].isAvailable == false)
        {
        	cout<<"Already booked car please enter valid option: ";
        	goto label8;
		}
        cout<<"You selected: ";
        r.carSelected=cars[op2-1];
        printCar(r.carSelected);
        cout<<"Do you need a driver? 1 for yes, 0 for no: "<<endl;
        label6:
        cin>>r.driver;
        while(true)
        if(r.driver==1 || r.driver==0)
        {
        	break;
		}
		else
		{
			cout<<"Enter valid option: ";
			goto label6;
		}
        if(r.driver==1)
		{
        	cout<<"Drivers Avliable Right Now\n";
        	label3:
        	for(int j=1,i=0;i<5;i++)
        	{
        		if(drivers[i].isAvailable == true)
        		{
				cout<<"______________________________"<<endl;
        		cout<<j<<" ";
        	    printDriver(drivers[i]);
        		cout<<"______________________________"<<endl;
        	    }
        	    j++;
			}
			cout<<"Please Select Your Driver: ";
			label9:
			cin>>op3;
			if(op3>5)
			{cout<<endl;
				cout<<"Please Enter Valid Option: "<<endl;
				goto label3;
			}
			if(drivers[op3-1].isAvailable == false)
        {
        	cout<<"Already booked driver please enter valid option: ";
        	goto label9;
		}
		}
		cout<<"\n*********Enter your personal details.*********\n";
		cout<<"Enter Your Name: ";
		int temp4=0;
		cin>>cust[temp4].name;
		cout<<"Enter your email address: ";
		cin>>cust[temp4].email;
		cout<<"Enter your CNIC: ";
		cin>>cust[temp4].cnic;
		cout<<"Enter your address: ";
		cin>>cust[temp4].address;
		cout<<endl;
        cout<<"Number of days: ";
        cin>>r.days;


        cout<<"Confirm name for the booking: "<<endl;

        cin>>cust[temp4].name;
        cout<<"=============================================\n";
        cout<<"               Your Final Bill               \n\n";
        cout<<"Your Name: "<<cust[temp4].name<<endl<<endl;
        cout<<"Your Booked Car: ";
        printCar(cars[op2-1]);
        cout<<"         *********Your Driver*********\n\n";
        if(op3==1)
        printDriver(drivers[op3-1]);
        else
        cout<<">You have not selected any driver.\n\n";
        cout<<"      *********Your Final Charges*********\n\n";
        calcCost(r.carSelected, r.driver, r.days);
        cout<<"=============================================\n";
        cout<<"We've sent booking details to your contact number.\n";
        cout<<"Thank you, "<<cust[temp4].name<<endl;
        cars[op2-1].isAvailable = false;
        drivers[op3-1].isAvailable = false;
        temp4++;
        cout<<"\nPlease enter your friend email, if you want to share your booking information with friend? Press 1 for yes, 0 for no\n";
        int temp5;
        label20:
        cin>>temp5;
        while(true)
        {
        	if(temp5==1)
        	{
        	cout<<"Email: ";
			cin>>cust[temp4].friend_email;
        	break;
			}
        	else if(temp5==0)
        	break;
        	else
        	cout<<"Please enter valid input: ";
        	goto label20;
        	break;
		}
		
    }
    int endVal = 1;
    cout<<endl<<"IF you want another booking then press 1 or press 0 for cancel your all booking."<<endl;
    cin>>endVal;
    if(endVal == 1)
        goto label;
    else if (endVal==0){
         for(int i=0;i<10;i++)
         {
         	cars[i].isAvailable = true;
         	drivers[i].isAvailable = true;
		 }
		 cout<<"If you want to place new order please click 1 or press 0.\n";
		 cin>>endVal;
		 if(endVal==1)
		 goto label;
		 else
		 cout<<"Thank You";
    }
    

    return 0;
}
