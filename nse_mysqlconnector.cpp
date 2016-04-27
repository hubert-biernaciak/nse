#include "nse_mysqlconnector.hpp"

//Definicje connector'a tutaj
MySQLConnector::MySQLConnector()
{
}

MySQLConnector::MySQLConnector(string address,int port, string user, string passwd,string databasename)
{
this.Address = address;
this.Port = port;
this.User = user;
this.Password = passwd;
this.DatabaseName=databasename;


}
