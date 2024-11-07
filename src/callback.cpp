#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/database.h"
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <iostream>
#include <sqlite3.h>
#include <string>

extern Fl_Group* menu;
extern Fl_Group* menu_venda;
extern Fl_Group* menu_estoque;
extern Fl_Group* menu_cad_prod;

void show_menu(Fl_Widget* widget, void* data){
   menu->show();
   menu_venda->hide();
   menu_estoque->hide();
   menu_cad_prod->hide(); 

}

void show_venda(Fl_Widget* widget, void* data){
   menu_venda->show();
   menu_estoque->hide();
   menu->hide();
   menu_cad_prod->hide(); 
   ///std::cout <<"janela venda" << std::endl;

}

void show_estoque(Fl_Widget* widget, void* data){
   menu_estoque->show();
   menu_venda->hide();
   menu->hide();
   menu_cad_prod->hide(); 

}

void show_cad_prod(Fl_Widget* widget, void* data){
   menu_cad_prod->show(); 
   menu_estoque->hide();
   menu->hide();
   menu_venda->hide();
   ///std::cout << "era pra ta cadastrando" << std::endl;
}

// conecção com o banco
extern sqlite3* db;
extern Fl_Input_Choice* in_nome_prod;
extern Fl_Input_Choice* in_marca_prod;
extern Fl_Input_Choice* in_categoria_prod;
extern Fl_Input_Choice* in_caracteristica_prod;
extern Fl_Input_Choice* in_tamanho_prod;
extern Fl_Input_Choice* in_fornecedor_prod;
extern Fl_Input* in_prc_compra_prod;
extern Fl_Input* in_prc_venda_prod;

void cadastrar_produto(Fl_Widget*, void*){
   try{
      std::string nome = in_nome_prod->value();
      std::string marca = in_marca_prod->value();
      std::string tipo = in_categoria_prod->value();
      std::string modelo = in_caracteristica_prod->value();
      std::string descricao = in_descricao_prod->value();
      std::string obs = in_obs_prod->value();

      int marca_id = inserirOuObterMarca(marca);
      if (marca_id == -1){
         std::cerr << "Erro ao inserir ou obter marca.";
         return;
      }

   int inserirOuObterTipo(const std::string& tipo) {
    std::string sql_select = "SELECT id_tipo FROM tipo WHERE nome_tipo = ?;";
    sqlite3_stmt* stmt;
    int tipo_id = -1;
    
    if (sqlite3_prepare_v2(db, sql_select.c_str(), -1, &stmt, nullptr) == SQLITE_OK) {
        sqlite3_bind_text(stmt, 1, tipo.c_str(), -1, SQLITE_STATIC);
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            tipo_id = sqlite3_column_int(stmt, 0);
        }
        sqlite3_finalize(stmt);
    }

    if (tipo_id == -1) {
        std::string sql_insert = "INSERT INTO tipo (nome_tipo) VALUES (?);";
        if (sqlite3_prepare_v2(db, sql_insert.c_str(), -1, &stmt, nullptr) == SQLITE_OK) {
            sqlite3_bind_text(stmt, 1, tipo.c_str(), -1, SQLITE_STATIC);
            if (sqlite3_step(stmt) == SQLITE_DONE) {
                tipo_id = sqlite3_last_insert_rowid(db);
            }
            sqlite3_finalize(stmt);
        }
    }

    return tipo_id;
}
      
      sqlite3_bind_text(stmt, 1, nome.c_str(), -1, SQLITE_STATIC);
      sqlite3_bind_int(stmt, 2, marca_id);
      sqlite3_bind_int(stmt, 3, tipo_id);
      sqlite3_bind_text(stmt, 4, modelo.c_str(), -1, SQLITE_STATIC);
      sqlite3_bind_text(stmt, 5, descricao.c_str(), -1, SQLITE_STATIC);
      sqlite3_bind_text(stmt, 6, obs.c_str(), -1, SQLITE_STATIC);

      if (sqlite3_step(stmt)!= SQLITE_DONE){
         std::cerr << "Erro ao inserir Produto: " << sqlite3_errmsg(db) << std::endl;
      
      }else{
         std::cout << "Produto cadastrado com sucesso" << std::endl;
         in_nome_prod->value("");
         in_marca_prod->value("");
         in_categoria_prod->value("");
         in_caracteristica_prod->value("");
         // Limpar outros campos se necessário
         }
      
      sqlite3_finalize(stmt);
      }catch (const std::exception& e){
         std::cerr << "Erro ao cadastrar produto: " << e.what() << std::endl;
      }

   }

int inserirOuObterMarca(const std::string& marca){
   std::string sql_select = "SELECT id_marca FROM marca WHERE nome_marca = ?;";
   sqlite3_stmt* stmt;
   int marca_id = -1;
   
   if (sqlite3_prepare_v2(db, sql_select.c_str(), -1, &stmt, nullptr) == SQLITE_OK){
      sqlite3_bind_text(stmt, 1, marca.c_str(), -1, SQLITE_STATIC);
      if (sqlite3_step(stmt) == SQLITE_ROW){
         marca_id = sqlite3_column_int(stmt, 0);
      }
      sqlite3_finalize(stmt);
   }

   if (marca_id == -1){
      std::string sql_insert = "INSERT INTO marca (nome_marca) VALUES (?);";
      if (sqlite3_prepare_v2(db, sql_insert.c_str(), -1, &stmt, nullptr) == SQLITE_OK){
         sqlite3_bind_text(stmt, 1, marca.c_str(), -1, SQLITE_STATIC);
         if (sqlite3_step(stmt) == SQLITE_DONE){
            marca_id = sqlite3_last_insert_rowid(db);
         }
         sqlite3_finalize(stmt);
      }
   }

   return marca_id;
}