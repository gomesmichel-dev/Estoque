#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>

extern sqlite3* db;  // Declare a variável global aqui

// Conectar o banco de dados
bool conectarBanco(sqlite3** db);

#endif // DATABASE_H