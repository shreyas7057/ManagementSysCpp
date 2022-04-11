#include<iostream>
#include<string>
#include<fstream>



class BookShop {

    std::string bookname;
    float price;
    int quantity;
    std::string authorName;

public:
    void addBook();
    void searchBook();
    void deleteBook();
    void updateBook();
    void detailBook();
    void availableBook();

};


void BookShop:: addBook() {
    std::cout<<"Enter book name: ";
    std::cin>>bookname;

    std::cout<<"Enter book price: ";
    std::cin>>price;

    std::cout<<"Enter books quantity purchased: ";
    std::cin>>quantity;

    std::cout<<"Enter author of book: ";
    std::cin>>authorName;

    std::ofstream ofs;
    ofs.open("book_list.txt");
    ofs<<bookname<<" "<<price<<" "<<quantity<<" "<<authorName<<std::endl;
    ofs.close();

}


void main_menu() {

    int ch;
    std::cout<<"********************************\n";
    std::cout<<"BOOKSHOP MANAGEMENT SYSTEM\n";std::cout<<"********************************\n";

    std::cout<<"Enter choice to perform operation: \n";
    std::cout<<"1) Add Books\t";
    std::cin>>ch;

    
}