#ifndef nse_mysqlconnector_hpp
#define nse_mysqlconnector_hpp
#include <string>
#include <my_global.h>
#include <mysql.h>
#include <stdlib.h>
using namespace std;


class MySQLConnector
{

//Pola klasy MySQLConnector
private:
MYSQL * connection;
MYSQL_RES * result;
MYSQL_ROW * row;

public:
string Address; //przechowuje adres serwera MySQL
int Port; // Numer portu
string User; // Nazwa użytkownika bazy danych
string Password; //hasło użytkownika bazy danch
string DatabaseName; //Nazwa bazydanych



//Metody MySQLConnector
public:

bool Connect(); //nawiąż próbę połączenia z bazą
bool Disconnect(); //rozłącz połączenie z bazą danych



//Konstruktory i destruktor
MySQLConnector();
MySQLConnector(string address,int port, string user, string passwd,string databasename);
~MySQLConnector();

};


#endif
