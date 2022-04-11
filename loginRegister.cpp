#include<iostream>
#include<string>
#include<pqxx/pqxx>

using namespace pqxx;

char *sql;

bool dbConnection() {

    connection C("dbname=cpptest user=postgres password=admin hostaddr=127.0.0.1 port=5432");

    if(C.is_open()) {
        std::cout<<"Database connected: "<<C.dbname()<<std::endl;

        sql = "CREATE TABLE IF NOT EXISTS auth(email TEXT PRIMARY KEY NOT NULL,PASSWORD CHAR NOT NULL);";

        work W(C);

        W.exec(sql);
        W.commit();

        std::cout<<"Table created"<<std::endl;

        return 0;
    }
    else {
        std::cout<<"Cannot connect with database"<<std::endl;
        return 1;
    }

}


void register_user() {


    if(dbConnection()==true) {

        sql = "INSERT INTO auth (email TEXT PRIMARY KEY NOT NULL,PASSWORD CHAR NOT NULL) VALUES('shreyas@gmail.com','1234');";

        std::cout<<"User created Successfully"<<std::endl;
    }

    else {
        
    }

}