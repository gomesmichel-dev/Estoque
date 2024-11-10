#include <iostream>
#include "../include/database.h"

sqlite3* db = nullptr; // Inicialização da variável global

int conectarNoBanco(const std::string& dbName) {
    int resultado = sqlite3_open(dbName.c_str(), &db); // Usa a variável global

    if (resultado != SQLITE_OK) {
        std::cerr << "Erro ao abrir banco de dados: " << sqlite3_errmsg(db) << std::endl;
        return resultado;  
    }

    std::cout << "Banco de dados conectado com sucesso!" << std::endl;
    return 0;
}