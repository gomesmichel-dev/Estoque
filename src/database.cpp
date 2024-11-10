#include <FL/Fl_Choice.H>
#include <sqlite3.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

void nomeTabelas(Fl_Choice* choice){
    const char* sql = "SELECT name FROM sqlite_master WHERE type='table';";
    sqlite3_stmt* stmt;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Erro ao preparar a consulta:" << sqlite3_errmsg(db) << std::endl;
        return;
    }
    choice->clear();
    std::vector<std::string> tabelas;

    while (sqlite3_step(stmt) == SQLITE_ROW){
        const char* tablename = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        if (std::string(tablename) != "sqlite_sequence") {
        tabelas.push_back(tablename);
    }
}
    sqlite3_finalize(stmt);

   std::vector<std::string> sequenciaPersonalizada = {
        "produto", 
        "marca",
        "fornecedor"
    };

     for (const auto& tabela : sequenciaPersonalizada) {
        auto it = std::find(tabelas.begin(), tabelas.end(), tabela);
        if (it != tabelas.end()) {
            choice->add(tabela.c_str()); // Adiciona a tabela na ordem definida
        }
    }
}