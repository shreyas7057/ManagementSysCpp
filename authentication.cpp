#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;


void login();
void registration();
void forgot();

int main() {

    int c;

    cout<<"\n\t ---------------------------------\n";
    cout<<"\n\t Welcome to Login Page\n";
    
    cout<<"\n\t Menu\n";
    cout<<"\n\t Press 1 to login \n";
    cout<<"\n\t Press 2 to register \n";
    cout<<"\n\t Press 3 to forgot password \n";
    cout<<"\n\t Press 4 to exit \n";


    cout<<"\n\t ---------------------------------\n";

    cout<<"\n\t Please enter your choice: ";
    cin>>c;

    switch(c) {
        case 1:
            login();
            break;

        case 2:
            registration();
            break;
        
        case 3:
            forgot();
            break;

        case 4:
            cout<<"\n\t Thank you\n";
            exit(0);
            break;
        
        default:
            system("cls");
            cout<<"Enter proper option";
            main();

    }

    return 0;
}


void login() {

    int count;
    string userId,password,id,pass;

    system("cls");

    cout<<"\n\t Please enter username and password: \n";
    
    cout<<"\n\t USERNAME: ";
    cin>>userId;

    cout<<"\n\t PASSWORD: ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>id>>pass){

        if(id==userId&& pass==password) {
            count = 1;
            system("cls");
        }
    }
    input.close();

    if(count==1) {
        cout<<"\n"<<userId<<" has logged in successfully\n";
        main();
    }
    else {
        cout<<"\n"<<"Login Error! Something went wrong\n";
        main();
    }
}


void registration() {

    string ruserId,rpassword,rId,rpass;

    system("cls");

    cout<<"\n\t Enter username: ";
    cin>>ruserId;

    cout<<"\n\t Enter password";
    cin>>rpassword;

    ofstream f1("records.txt",ios::app);

    f1<<ruserId<<" "<<rpassword;

    system("cls");

    cout<<"\n\t Registration done successfully";

    main();
}


void forgot() {

    int option;

    system("cls");

    cout<<"\n\t You forgot password No worries: ";
    cout<<"\n\t Press 1 to search username\n\t Press 2 to goto main menu";

    cout<<"\n\t Enter your choice: ";
    cin>>option;


    switch(option) {
        case 1:
            {
                int count = 0;
                string suserId,sId,spass;
                cout<<"\n\tEnter your username: ";
                cin>>suserId;
                ifstream f2("records.txt");

                while(f2>>sId>>spass) {
                    if(sId == suserId) {
                        count= 1;

                    }
                }
                f2.close();
                if(count==1) {
                    cout<<"\n\t Your account found";
                    cout<<"\n\t Your password is: "<<spass;
                    main();
                }
                else {
                    cout<<"Your account not found";
                }
                break;
            }
        case 2:
            main();
            system("cls");
            break;

        default:
            system("cls");
            cout<<"Enter proper option";
            forgot();
    }
}