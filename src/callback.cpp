#include "../include/layout.h"
#include "../include/callback.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Button.H>
#include <sqlite3.h>
#include <iostream>
#include <string>
#include <vector>


extern Fl_Group* menu;
extern Fl_Group* menu_venda;
extern Fl_Group* menu_estoque;
extern Fl_Group* menu_cad_prod;

void show_menu(Fl_Widget* widget, void* data) {
    menu->show();
    menu_venda->hide();
    menu_estoque->hide();
    menu_cad_prod->hide(); 
}

void show_venda(Fl_Widget* widget, void* data) {
    menu_venda->show();
    menu_estoque->hide();
    menu->hide();
    menu_cad_prod->hide(); 
}

void show_estoque(Fl_Widget* widget, void* data) {
    menu_estoque->show();
    menu_venda->hide();
    menu->hide();
    menu_cad_prod->hide(); 
}

void show_cad_prod(Fl_Widget* widget, void* data) {
    menu_cad_prod->show(); 
    menu_estoque->hide();
    menu->hide();
    menu_venda->hide();
}

void cadastroProduto(){
    std::cout <<"cadastro produto" << std::endl;
}

void cadastroMarca(){
    std::cout <<"cadastro marca" << std::endl;
}

void cadastroFornecedor(){
        std::cout <<"cadastro fornecedor" << std::endl;
}


void escolha_cadastro(Fl_Widget* widget, void* data) {
    if (data == nullptr) {
        std::cerr << "Erro: ponteiro 'data' é nulo!" << std::endl;
        return;
    }
    Fl_Choice* choice = (Fl_Choice*)data;
    int index = choice->value();
    
    std::cout << "Opção selecionada: " << index << std::endl;
    
    switch (index){
    case 0:
        cadastroProduto();
        break;
    case 1:
        cadastroMarca();
        break;
    case 2:
        cadastroFornecedor();
        break;
    
    default:
    std::cout << "Escolha inválida!" << std::endl;
    break;
    }
}
