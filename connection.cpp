#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
       QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
       db.setDatabaseName("Source_Projet2A");
       db.setUserName("chiheb"); // Insert the username
       db.setPassword("chiheb"); // Insert the password

       if (db.open()) {
           test = true;
           qDebug() << "CONNECTE A LA BASE ";
       } else {
           qDebug() << "Failed to connect to Oracle Express Database via ODBC:" << db.lastError().text();
           qDebug() << "Oracle Error:" << db.lastError().databaseText();
       }

       return test;

}