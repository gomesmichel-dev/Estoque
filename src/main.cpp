#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/database.h"
#include <iostream>
int main() {
   sqlite3* db;
    if (!conectarBanco(&db)) {
        return -1;
    }
    
    std::cout << "Conectado ao banco de dados." << std::endl;

    // Código para listar as tabelas no banco de dados
    const char* sql = "SELECT name FROM sqlite_master WHERE type='table';";
    sqlite3_stmt* stmt;
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) == SQLITE_OK) {
        std::cout << "Tabelas encontradas no banco de dados:" << std::endl;
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            std::cout << "- " << sqlite3_column_text(stmt, 0) << std::endl;
        }
        sqlite3_finalize(stmt);
    } else {
        std::cout << "Erro ao consultar tabelas: " << sqlite3_errmsg(db) << std::endl;
    }
    Fl_Double_Window* window = main_window();  // Cria a janela
    window->show();  // Exibe a janela
    return Fl::run();  // Inicia o loop de eventos
}