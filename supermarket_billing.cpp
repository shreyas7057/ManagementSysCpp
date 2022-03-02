// completed till: 35.31 min 1 video of 1.23.07 

#include<iostream>
#include<fstream>
#include<string>


class Shopping {
private:
    int pcode;
    float price;
    float discount;
    std::string pname;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void remove();
    void list();
    void receipt();
};

void Shopping::menu() {
    m:
    int choice;
    std::string email;
    std::string password;
    
    std::cout<<"\t\t\t\t*****************\n";
    std::cout<<"\t\t\t\t                 \n";
    std::cout<<"    SuperMarket Main Menu    \n";
    std::cout<<"\t\t\t\t*****************\n";
    std::cout<<"\t\t\t\t                 \n";

    std::cout<<"\t\t\t\t 1) Administrator \n";
    std::cout<<"\t\t\t\t 2) Buyer \n";
    std::cout<<"\t\t\t\t 3) Exit \n";
    
    std::cout<<"\t\t\t\t Please select the option: ";
    std::cin>>choice;
    std::cout<<std::endl;

    switch(choice) {
        case 1:
            std::cout<<"\t\t\t\tPlease login\n";
            std::cout<<"\t\t\t\t Enter email and password: ";
            std::cin>>email>>password;

            if(email=="shreyas@gmail.com" &&password=="Admin@123") {
                administrator();
            }
            else {
                std::cout<<"Invalid email and password\n";
            }

            break;

        case 2:
            buyer();
            break;

        case 3:
            exit(0);
            break;

        default:
            std::cout<<"Invalid option\n";
            break;
    }

    goto m;
}


void Shopping::administrator() {
    m:
    int choice;

    std::cout<<"\t\t\t\t*****************\n";
    std::cout<<"\t\t\t\t                 \n";
    std::cout<<"    Administrator Menu    \n";
    std::cout<<"\t\t\t\t*****************\n";
    std::cout<<"\t\t\t\t                 \n";

    std::cout<<"\t\t\t\t 1) Add Product \n";
    std::cout<<"\t\t\t\t 2) Edit Product \n";
    std::cout<<"\t\t\t\t 3) Remove Product \n";
    std::cout<<"\t\t\t\t 4) Back to main menu \n";
    
    std::cout<<"\t\t\t\t Please select the option: ";
    std::cin>>choice;
    std::cout<<std::endl;

    switch(choice) {
        case 1:
            add();
            break;
        
        case 2:
            edit();
            break;

        case 3:
            remove();
            break;

        case 4:
            menu();
            break;
        
        default:
            std::cout<<"Invalid choice";
            break;
    }

    goto m;

}

void Shopping:: buyer() {
    m:
    int choice;
    
    std::cout<<"\t\t\t\t*****************\n";
    std::cout<<"\t\t\t\t                 \n";
    std::cout<<"    Buyer Menu    \n";
    std::cout<<"\t\t\t\t*****************\n";
    std::cout<<"\t\t\t\t                 \n";

    std::cout<<"\t\t\t\t 1) Buy Product \n";
    std::cout<<"\t\t\t\t 2) Back to main menu \n";
    
    std::cout<<"\t\t\t\t Please select the option: ";
    std::cin>>choice;
    std::cout<<std::endl;

    switch(choice) {
        case 1:
            receipt();
            break;
        
        case 2:
            menu();
            break;
        
        default:
            std::cout<<"Invalid option";
            break;
    }
    goto m;
}


void Shopping::add() {

    m:

    std::fstream data;
    int c;
    int token=0;
    float p;
    float d;
    std::string n;

    std::cout<<"\t\t\t\t Add New Product\n";
    
    std::cout<<"Enter product code: ";
    std::cin>>pcode;
    std::cout<<std::endl;

    std::cout<<"Enter name of product: ";
    std::cin>>pname;
    std::cout<<std::endl;

    std::cout<<"Price of product is: ";
    std::cin>>pname;
    std::cout<<std::endl;

    std::cout<<"Discount on product: ";
    std::cin>>discount;
    std::cout<<std::endl;

    data.open("database.txt",std::ios::in);

    if(!data) {
        data.open("database.txt",std::ios::out|std::ios::app);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";
        data.close(); 
    }

    else {
        data>>c>>n>>p>>d;

        while(!data.eof()) {
            if(c==pcode) {
                token++;
            }
            data>>c>>n>>p>>d;
        }

        data.close();

        if(token==1) {
            goto m;
        }

        else {
            data.open("database.txt",std::ios::out|std::ios::app);
            data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";
            data.close(); 
        }
    }

    std::cout<<"Record Inserted\n";
}


void Shopping::edit() {
    std::fstream data,data1;

    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    std::string n;

    std::cout<<"\t\t\t\tModify Record: \n";
    std::cout<<"\t\t\t\tEnter product code: ";
    std::cin>>pkey;

    data.open("database.txt",std::ios::in);
    if(!data) {
        std::cout<<"File does not exists";
    }
    else {
        data1.open("database1.txt",std::ios::out|std::ios::app);
        data>>pcode>>pname>>price>>discount;

        while(!data.eof()) {
            if(pkey==pcode) {
                std::cout<<"\t\t\t\t Product of new code: ";
                std::cin>>c;
                std::cout<<"\t\t\t\t Enter name of product: ";
                std::cin>>n;
                std::cout<<"\t\t\t\t Price of product: ";
                std::cin>>p;
                std::cout<<"\t\t\t\t Discount of product: ";
                std::cin>>d;

                data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                std::cout<<"Record edited\n";
                token++;
            }

            else {
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";

            }
            data>>pcode>>pname>>price>>discount;

        }
        data.close();
        data1.close();

        std::remove("database.txt");
        std::rename("database1.txt","database.txt");

        if(token==0) {
            std::cout<<"\t\t\t\t Record not found";
        }
    }
}

void Shopping::remove() {
    std::fstream data,data1;

    int pkey;
    int token=0;
    std::cout<<"\t\t\t\t Remove the product \n";
    std::cout<<"\t\t\t\t Product code: \n";
    std::cin>>pkey;

    data.open("database.txt",std::ios::in);

    if(!data) {
        std::cout<<"file does not exists";
    }
    else {
        data1.open("database1.txt",std::ios::app|std::ios::out);
        data>>pcode>>pname>>price>>discount;

        while(!data.eof()) {
            if(pcode==pkey) {
                std::cout<<"\t\t\t\t Product Delete Successfully";
                token++;
            }
            else {
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<discount<<"\n";
            }
            data>>pcode>>pname>>price>>discount;
        }
        data.close();
        data1.close();

        std::remove("database.txt");
        std::rename("database1.txt","database.txt");

        if(token==0) {
            std::cout<<"Record not found";
        }
    }
}

void Shopping::list() {

    std::fstream data;

    data.open("database.txt",std::ios::in);

    std::cout<<"\t\t\t\t List Of Products\n";
    std::cout<<"Product No.\t Name\t Price\t Discount\n";
    data>>pcode>>pname>>price>>discount;

    while(!data.eof()) {
        std::cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\t\t"<<discount<<"\n";
        data>>pcode>>pname>>price>>discount;
    }
    data.close();
}

void Shopping::receipt() {
    m:
    std::fstream data;

    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amount=0;
    float discount=0;
    float total = 0;

    std::cout<<"\t\t\t\t RECEIPT \n";
    data.open("database.txt",std::ios::in);

    if(!data) {
        std::cout<<"Database is empty";
    }
    else {
        data.close();

        list();

        std::cout<<"\t\t\t\t Place your order: \n";

        do {
            std::cout<<"\t\t\t\t Product Code: ";
            std::cin>>arrc[c];
            std::cout<<std::endl;

            std::cout<<"\t\t\t\t Product Quantity: ";
            std::cin>>arrq[c];
            std::cout<<std::endl;

            for(int i=0;i<c;i++) {
                if(arrc[c]==arrc[i]) {
                    std::cout<<"Duplicate product code. Please try again\n";
                    goto m;
                }
            }
            c++;
            std::cout<<"Do you want to buy another product(Y/N)";
            std::cin>>choice;

        }while(choice=='Y'||choice=='y');

        std::cout<<"\t\t\t\t Receipt\n";
        std::cout<<"Product Num\tProduct Name\t Product Quantity\t Product Price\t Product Discount\n";

        for(int i=0;i<c;i++) {
            data.open("database.txt",std::ios::in);
            data>>pcode>>pname>>price>>discount;

            while(!data.eof()) {
                if(pcode==arrc[i]) {
                    amount = price*arrq[i];
                    discount = amount-(amount*discount/100);
                    total = total+discount;
                    std::cout<<"\t"<<pcode<<"\t"<<pname<<"\t"<<arrq[i]<<"\t"<<price<<"\t"<<amount<<"\t"<<discount;
                }
                data>>pcode>>pname>>price>>discount;
            }
        }
        data.close();
    }
    std::cout<<"\t\t\t\t Total Amount"<<total;
}

int main() {

    Shopping s;

    s.menu();

    return 0;
}

