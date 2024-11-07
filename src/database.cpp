#include "../include/database.h"

sqlite3* db = nullptr; // Definição da variável global

bool conectarBanco(sqlite3** db) {
    int rc = sqlite3_open_v2("/home/g0m3s/Estoque/db/estoque.db", db, SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, nullptr);
    if (rc) {
        std::cerr << "Não foi possível abrir o banco de dados: " << sqlite3_errmsg(*db) << std::endl;
        return false;
    }
    
    const char* pragma_sql = "PRAGMA cache_size = 1000;"; // Teste com cache menor
    rc = sqlite3_exec(*db, pragma_sql, nullptr, nullptr, nullptr);
    if (rc != SQLITE_OK) {
        std::cerr << "Erro ao configurar cache: " << sqlite3_errmsg(*db) << std::endl;
        sqlite3_close(*db);
        return false;
    }

    return true;
}

int inserirOuObterMarca(const std::string& marca) {
    std::string sql_select = "SELECT id_marca FROM marca WHERE nome_marca = ?;";
    sqlite3_stmt* stmt;
    int marca_id = -1;
    
    if (sqlite3_prepare_v2(db, sql_select.c_str(), -1, &stmt, nullptr) == SQLITE_OK) {
        sqlite3_bind_text(stmt, 1, marca.c_str(), -1, SQLITE_STATIC);
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            marca_id = sqlite3_column_int(stmt, 0);
        }
        sqlite3_finalize(stmt);  // Libera os recursos após o uso
    } else {
        std::cerr << "Erro no prepare do SELECT: " << sqlite3_errmsg(db) << std::endl;
        return -1;
    }

    if (marca_id == -1) {
        std::string sql_insert = "INSERT INTO marca (nome_marca) VALUES (?);";
        if (sqlite3_prepare_v2(db, sql_insert.c_str(), -1, &stmt, nullptr) == SQLITE_OK) {
            sqlite3_bind_text(stmt, 1, marca.c_str(), -1, SQLITE_STATIC);
            if (sqlite3_step(stmt) == SQLITE_DONE) {
                marca_id = sqlite3_last_insert_rowid(db);
            }
            sqlite3_finalize(stmt);  // Libera os recursos após o uso
        } else {
            std::cerr << "Erro no prepare do INSERT: " << sqlite3_errmsg(db) << std::endl;
            return -1;
        }
    }

    return marca_id;
}
