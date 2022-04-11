#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management{

public:
    Management() {

        mainMenu();

    }

};

class Details {
public:
    static string name,gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information() {
        cout<<"\n\t Enter customer id: ";
        cin>>cId;

        cout<<"\n\t Enter name: ";
        cin>>name;

        cout<<"\n\t Enter age: ";
        cin>>age;

        cout<<"\n\t Enter address: ";
        cin>>add;

        cout<<"\n\t Enter gender: ";
        cin>>gender;

        cout<<"\n\t Your details are saved with us";

    }
};

int Details::cId;
string Details::name;
string Details::gender;

class Registration {
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights() {
        string flightN[] = {"India","Korea","Russia","Singapore","Italy"};

        for(int a = 0;a<6;a++) {
            cout<<"\n\t"<<(a+1)<<".flight to"<<flightN[a]<<endl;
        }
        cout<<"\n\t Welcome to Airlines";
        cout<<"\n\t Press the number of country you want to book: ";
        cin>>choice;

        switch(choice) {

            case 1:
                {   
                    cout<<"\n\t Welcome to India Air India";
                    cout<<"\n\t Your comfort is our priority";
                    cout<<"\n\t Following are flights";
                    cout<<"\n\t 1) IND-498";
                    cout<<"\n\t 08-01-2022 8.00AM 10Hr Rs.15000";
                    
                    cout<<"\n\t 2) IND-500";
                    cout<<"\n\t 10-01-2022 12.00AM 10Hr Rs.5000";
                    
                    cout<<"\n\t 3) IND-200";
                    cout<<"\n\t 11-01-2022 1.00PM 10Hr Rs.25000";

                    cout<<"\n\t Select flight you want to book: ";
                    cin>>choice1;

                    if(choice1==1) {
                        charges = 14000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }
                    else if (choice1==2) {
                        charges = 5000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }

                    else if (choice1==3) {
                        charges = 25000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }
                    else {
                        cout<<"\n\t Invalid option";
                        flights();
                    }
                    cout<<"\n\tPress any key to go back to menu";
                    cin>>back;

                    if(back==1) {
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }

                    break;
                }

            case 2:
                {   
                    cout<<"\n\t Welcome to Korean Airlines";
                    cout<<"\n\t Your comfort is our priority";
                    cout<<"\n\t Following are flights";
                    cout<<"\n\t 1) KN-458";
                    cout<<"\n\t 08-01-2022 7.00AM 10Hr Rs.15000";
                    
                    cout<<"\n\t 2) KN-200";
                    cout<<"\n\t 10-01-2022 11.00AM 10Hr Rs.5000";
                    
                    cout<<"\n\t 3) KN-100";
                    cout<<"\n\t 11-01-2022 6.00PM 10Hr Rs.25000";

                    cout<<"\n\t Select flight you want to book: ";
                    cin>>choice1;

                    if(choice1==1) {
                        charges = 14000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }
                    else if (choice1==2) {
                        charges = 5000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }

                    else if (choice1==3) {
                        charges = 25000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }
                    else {
                        cout<<"\n\t Invalid option";
                        flights();
                    }
                    cout<<"\n\tPress any key to go back to menu";
                    cin>>back;

                    if(back==1) {
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }

                    break;
                }

            case 3:
                {   
                    cout<<"\n\t Welcome to Russia Airlines";
                    cout<<"\n\t Your comfort is our priority";
                    cout<<"\n\t Following are flights";
                    cout<<"\n\t 1) RUS-4508";
                    cout<<"\n\t 08-01-2022 7.00AM 10Hr Rs.15000";
                    
                    cout<<"\n\t 2) RUS-2800";
                    cout<<"\n\t 10-01-2022 11.00AM 10Hr Rs.5000";
                    
                    cout<<"\n\t 3) RUS-1700";
                    cout<<"\n\t 11-01-2022 6.00PM 10Hr Rs.25000";

                    cout<<"\n\t Select flight you want to book: ";
                    cin>>choice1;

                    if(choice1==1) {
                        charges = 14000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }
                    else if (choice1==2) {
                        charges = 5000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }

                    else if (choice1==3) {
                        charges = 25000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }
                    else {
                        cout<<"\n\t Invalid option";
                        flights();
                    }
                    cout<<"\n\tPress any key to go back to menu";
                    cin>>back;

                    if(back==1) {
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }

                    break;
                }
            case 4:
                
                {   
                    cout<<"\n\t Welcome to Singapore Airlines";
                    cout<<"\n\t Your comfort is our priority";
                    cout<<"\n\t Following are flights";
                    cout<<"\n\t 1) SING-48";
                    cout<<"\n\t 08-01-2022 7.00AM 10Hr Rs.15000";

                    cout<<"\n\t Select flight you want to book: ";
                    cin>>choice1;

                    if(choice1==1) {
                        charges = 15000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }
                    
                    else {
                        cout<<"\n\t Invalid option";
                        flights();
                    }
                    cout<<"\n\tPress any key to go back to menu";
                    cin>>back;

                    if(back==1) {
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }

                    break;
                }

            case 5:
                {   
                    cout<<"\n\t Welcome to Italy Airlines";
                    cout<<"\n\t Your comfort is our priority";
                    cout<<"\n\t Following are flights";
                    cout<<"\n\t 1) ITL-340";
                    cout<<"\n\t 08-01-2022 7.00AM 10Hr Rs.15000";
                    
                    cout<<"\n\t 2) ITL-240";
                    cout<<"\n\t 08-01-2022 6.00AM 10Hr Rs.25000";

                    cout<<"\n\t Select flight you want to book: ";
                    cin>>choice1;

                    if(choice1==1) {
                        charges = 15000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }

                    else if(choice1==2) {
                        charges = 25000;
                        cout<<"\n\t You booked flight successfully";
                        cout<<"\n\t You can go back to menu";
                    }
                    
                    else {
                        cout<<"\n\t Invalid option";
                        flights();
                    }
                    cout<<"\n\tPress any key to go back to menu";
                    cin>>back;

                    if(back==1) {
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }

                    break;
                }

            default:
                cout<<"\n\t Invalid input.";
                mainMenu();
                break;
        }

    }
};

float Registration::charges;
int Registration::choice;

class Ticket: public Registration, Details {
public:
    void bill() {

        string destination = "";
        ofstream outf("records.txt");
        {
            outf<<"\n\t XYZ Airlines";
            outf<<"\n\t Ticket";

            outf<<"\n\t Customer ID: "<<Details::cId<<"\n";
            outf<<"\n\t Customer Name: "<<Details::name<<"\n";
            outf<<"\n\t Customer Gender: "<<Details::gender<<"\n";
            outf<<"\n\t Description\n";

            if(Registration::choice==1) {
                destination = "India";    
            }

            else if(Registration::choice==2) {
                destination = "Korea";
            }

            else if(Registration::choice==3) {
                destination = "Russia";
            }

            else if(Registration::choice==4) {
                destination = "Singapore";
            }
            
            else if(Registration::choice==5) {
                destination = "Italy";
            }

            outf<<"\n\t Destination: "<<destination<<"\n";
            outf<<"\n\t Flight cost: "<<Registration::charges<<endl;

        }

        outf.close();
    }

    void dispBill() {

        ifstream ifs("records.txt");

        if(!ifs) {
            cout<<"\n\t File error";
        }
        while(!ifs.eof()) {
            ifs.getline(arr,100);
            cout<<arr<<endl;
        }
        ifs.close();
    }
};

void mainMenu() {

    int lchoice;
    int schoice;
    int back;

    cout<<"\n\t KSH AirLines System";
    cout<<"\n\t ---- Main Menu -----";

    cout<<"\n\t Press 1) to Add Customer";
    cout<<"\n\t Press 2) to Flight Registration";
    cout<<"\n\t Press 3) to Ticket and Charges";
    cout<<"\n\t Press 4) to Exit";
    cout<<"\n";

    cout<<"\t Enter choice: ";
    cin>>lchoice;

    Details d;

    Registration r;

    Ticket t;

    switch(lchoice) {

        case 1:
            {
                cout<<"\n\t Customers ";
                d.information();
                cout<<"\n\t Press any key to goto main menu";
                cin>>back;

                if(back==1) {
                    mainMenu();
                }
                else {
                    mainMenu();
                }
                break;
            }
            

        case 2:
            {
                cout<<"\n\t Book flight using this system";
                r.flights();
                break;
            }
            

        case 3:
            {   
                cout<<"\n\t Get your ticket";
                t.bill();
                cout<<"\n\t Your ticket is printed, collect it.";
                cout<<"\n\t Press 1 to display ticket";
                cin>>back;

                if(back==1) {
                    t.dispBill();
                    cout<<"\n\t Press any key to go back to main menu";
                    cin>>back;

                    if(back==1) {
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }
                }
                else {
                    mainMenu();
                }

                break;
            }
            
        case 4:
            {   
                cout<<"\n\t Thank you for your visit";
                exit(0);
                break;
            }
            
        default:
            cout<<"\n\t Invalid input";
            mainMenu();
            break;
    }
}


int main() {

    Management Mobj;


    return 0;
}