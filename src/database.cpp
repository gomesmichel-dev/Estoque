#include "../include/database.h"

sqlite3* db = nullptr; // Definição da variável global

bool conectarBanco(sqlite3** db) {
    int rc = sqlite3_open("../db/estoque.db", db);
    if (rc) {
        std::cout << "Não foi possível abrir o banco de dados: " << sqlite3_errmsg(*db) << std::endl;
        return false;
    }
    return true;
}