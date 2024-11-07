#include "../include/database.h"
#include "sqlite3.h"

sqlite3* db = nullptr;  // Define a variável global aqui

bool conectarBanco(sqlite3** db) {
    int rc = sqlite3_open("../db/estoque.db", db);
    if (rc != SQLITE_OK) {
        return false;
    }
    return true;
}