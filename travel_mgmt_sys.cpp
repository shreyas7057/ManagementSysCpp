#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
#include<thread>
#include <chrono>

class Customers {

public:
    std::string name,gender,address;
    int age,mobileNo,cusID;
    char all[999];


    void getDetails() {

        std::ofstream out("old-customers.txt",std::ios::app);

        {
            std::cout<<"Enter customer ID: ";
            std::cin>>cusID;
            std::cout<<std::endl;

            std::cout<<"Enter customer name: ";
            std::cin>>name;
            std::cout<<std::endl;

            std::cout<<"Enter customer age: ";
            std::cin>>age;
            std::cout<<std::endl;

            std::cout<<"Enter customer mobile No: ";
            std::cin>>mobileNo;
            std::cout<<std::endl;

            std::cout<<"Enter customer address: ";
            std::cin>>address;
            std::cout<<std::endl;

            std::cout<<"Enter customer gender: ";
            std::cin>>gender;
            std::cout<<std::endl;
        }

        out<<"\n Customer ID: "<<cusID<<"\n Name: "<<name<<"\n Age"<<age<<"\n Mobile No."<<mobileNo<<"\n Address: "<<address<<"\n Gender"<<gender<<"\n";

        out.close();
        std::cout<<"\n SAVED \n NOTE: We save your details record for future purpose\n"; 
    }

    void showDetails() {

        std::ifstream in("old-customers.txt"); 
        {
            if(!in) {
                std::cout<<"File error\n";
            }

            while(!(in.eof())) {
                in.getline(all,999);
                std::cout<<all<<std::endl;
            }
            in.close();
        }
    }

};


class Cabs {

public:
    int cabChoice;
    int kilometers;
    float cabCost;
    static float lastCabCost;

    void cabDetails() {
        std::cout<<"\n 1. Rent Std Cab- Rs.15 for 1KM\n";
        std::cout<<"\n 2. Luxary Std Cab- Rs.25 for 1KM\n";

        std::cout<<"\n Calc the cost for your journey\n";
        std::cout<<"Enter which type of cab you need: ";
        std::cin>>cabChoice;

        std::cout<<"Enter kilometer you need to drive you need: ";
        std::cin>>kilometers;

        int hireCab;

        if(cabChoice==1) {
            cabCost = kilometers*15;
            std::cout<<"\n Your cost will be: "<<cabCost<<" Rs. for standard cab\n";
            std::cout<<"Press 1 to hire this cab or\n";
            std::cout<<"Press 2 to select another cab\n";
            std::cin>>hireCab;

            system("cls");

            if(hireCab==1) {
                lastCabCost = cabCost;
                std::cout<<"\n You have successfully hired standard cab\n";
                std::cout<<"Goto Menu and take reciept\n";
            }
            else if(hireCab==2) {
                cabDetails();
            }
            else {
                std::cout<<"Invalid input! Redirecting to previous menu\n Please wait!";
                // sleep(999);
                system("cls");
                cabDetails();
            }

        } //for standard cab

        else if(cabChoice==2) {
            cabCost = kilometers*25;
            std::cout<<"\n Your cost will be: "<<cabCost<<" Rs. for standard cab\n";
            std::cout<<"Press 1 to hire this cab or\n";
            std::cout<<"Press 2 to select another cab\n";
            std::cin>>hireCab;

            system("cls");

            if(hireCab==1) {
                lastCabCost = cabCost;
                std::cout<<"\n You have successfully hired standard cab\n";
                std::cout<<"Goto Menu and take reciept\n";
            }
            else if(hireCab==2) {
                cabDetails();
            }
            else {
                std::cout<<"Invalid input! Redirecting to previous menu\n Please wait!";
                // sleep(999);
                system("cls");
                // menu();
            }
        } //for luxary cab
        std::cout<<"\n Press 1 to redirect main menu: ";
        std::cin>>hireCab;
        system("cls");

        if(hireCab == 1) {
            menu();
        }
        else {
            menu();
        }
    }

};

float Cabs:: lastCabCost;


class Bookings {

public:
    int choiceHotels;
    int packChoice;
    static float hotelCost;

    void hotels() {

        std::string hotelNo[] = {"RoyalIn","CityIn","ElephantBay"};

        for(int a=0;a<3;a++) {
            std::cout<<(a+1)<<"."<<"Hotel"<<hotelNo[a]<<"\n";
        }
        std::cout<<"\n Currently we collaborated above hotels\n";
        std::cout<<"Press any key to go back or \n Enter hotel number to book\n";
        std::cin>>choiceHotels;

        system("cls");

        if(choiceHotels==1) {
            std::cout<<"Welcome to RoyalIn\n";
            std::cout<<"Packages are: \n";
            std::cout<<"1) Standard Package (All basic facilities in Rs.5000)\n";
            std::cout<<"2) Premium Package (Rs.10000)\n";
            std::cout<<"3) Luxury package (Rs.15000)\n";

            std::cout<<"Press another key to go back or\n Enter package number to enroll\n";
            std::cin>>packChoice;


            if(packChoice==1) {
                hotelCost = 5000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else if(packChoice == 2) {
                hotelCost = 10000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else if(packChoice == 3) {
                hotelCost = 15000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else {
                std::cout<<"Invalid choice redirecting to main menu\n";
                system("cls");
                hotels();
            }

            int gotomenu;
            std::cout<<"\n Press 1 to redirect to main menu";
            std::cin>>gotomenu;
            
            if(gotomenu==1) {
                menu();
            }
            else {
                menu();
            }
        } // hotel 1 royalin


        else if(choiceHotels==2) {
            std::cout<<"Welcome to CityIn\n";
            std::cout<<"Packages are: \n";
            std::cout<<"1) Standard Package (All basic facilities in Rs.5000)\n";
            std::cout<<"2) Premium Package (Rs.10000)\n";
            std::cout<<"3) Luxury package (Rs.15000)\n";

            std::cout<<"Press another key to go back or\n Enter package number to enroll\n";
            std::cin>>packChoice;


            if(packChoice==1) {
                hotelCost = 5000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else if(packChoice == 2) {
                hotelCost = 10000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else if(packChoice == 3) {
                hotelCost = 15000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else {
                std::cout<<"Invalid choice redirecting to main menu\n";
                system("cls");
                hotels();
            }
            int gotomenu;
            std::cout<<"\n Press 1 to redirect to main menu";
            std::cin>>gotomenu;
            
            if(gotomenu==1) {
                menu();
            }
            else {
                menu();
            }
        }// hotel 2 cityin


        else if(choiceHotels==3) {
            std::cout<<"Welcome to ElephantBay\n";
            std::cout<<"Packages are: \n";
            std::cout<<"1) Standard Package (All basic facilities in Rs.5000)\n";
            std::cout<<"2) Premium Package (Rs.10000)\n";
            std::cout<<"3) Luxury package (Rs.15000)\n";

            std::cout<<"Press another key to go back or\n Enter package number to enroll\n";
            std::cin>>packChoice;


            if(packChoice==1) {
                hotelCost = 5000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else if(packChoice == 2) {
                hotelCost = 10000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else if(packChoice == 3) {
                hotelCost = 15000;
                std::cout<<"Hotel Booked\n GO and take reciept\n";
            }

            else {
                std::cout<<"Invalid choice redirecting to main menu\n";
                system("cls");
                hotels();
            }
            int gotomenu;
            std::cout<<"\n Press 1 to redirect to main menu";
            std::cin>>gotomenu;
            
            if(gotomenu==1) {
                menu();
            }
            else {
                menu();
            }
        }// hotel 3 elephantbay

    }

};

float Bookings:: hotelCost;

class Charges : public Bookings,Cabs,Customers {

public:
    void printBill() {
        std::ofstream outf("reciept.txt");
        {
            outf<<"Customer Id: "<<Customers::cusID<<"\n";
        }

    }

};



int main() {

    

    return 0;
}