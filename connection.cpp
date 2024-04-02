#include "connection.h"

Connection::Connection() {}

bool Connection::createconnection() {
  bool test = false;
  QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
  db.setDatabaseName("Projet2A");
  db.setUserName("YOUSSEF");    // Insert the username
  db.setPassword("youssef"); // Insert the password

  if (db.open()) {
    test = true;
    qDebug() << "CONNECTE A LA BASE ";
  } else {
    qDebug() << "Failed to connect to Oracle Express Database via ODBC:"
             << db.lastError().text();
    qDebug() << "Oracle Error:" << db.lastError().databaseText();
  }

  return test;
}
