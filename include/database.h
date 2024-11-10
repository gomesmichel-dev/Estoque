#ifndef DATABASE_H
#define DATABASE_H
#include <sqlite3.h>
#include <string>

extern sqlite3* db;

int conectarNoBanco(const std::string& dbName);

#endif