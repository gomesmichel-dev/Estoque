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
    std::cout << "abriu o menu de venda" << std::endl;
    menu->hide();
    menu_venda->show();
    menu_nova_venda->hide();
    menu_canc_venda->hide();
    menu_ver_venda->hide();
    menu_estoque->hide();
    menu_cad_prod->hide();
    menu_cad_marca->hide();
    menu_cad_fornecedor->hide();
}
void show_menu_venda(Fl_Widget* widget, void* data) {
    std::cout << "abriu o menu para vender" << std::endl;
    menu->hide();
    menu_venda->hide();
    menu_nova_venda->show();
    menu_canc_venda->hide();
    menu_ver_venda->hide();
    menu_estoque->hide();
    menu_cad_prod->hide();
    menu_cad_marca->hide();
    menu_cad_fornecedor->hide();
}
void show_menu__canc_venda(Fl_Widget* widget, void* data) {
    std::cout << "abriu o menu para cancelar" << std::endl;
    menu->hide();
    menu_venda->hide();
    menu_nova_venda->hide();
    menu_canc_venda->show();
    menu_ver_venda->hide();
    menu_estoque->hide();
    menu_cad_prod->hide();
    menu_cad_marca->hide();
    menu_cad_fornecedor->hide();
}
void show_menu_ver_venda(Fl_Widget* widget, void* data) {
    std::cout << "abriu o menu para Ver vendas" << std::endl;
    menu->hide();
    menu_venda->hide();
    menu_nova_venda->hide();
    menu_canc_venda->hide();
    menu_ver_venda->show();
    menu_estoque->hide();
    menu_cad_prod->hide();
    menu_cad_marca->hide();
    menu_cad_fornecedor->hide();
}
void show_estoque(Fl_Widget* widget, void* data) {
    menu->hide();
    menu_venda->hide();
    menu_nova_venda->hide();
    menu_canc_venda->hide();
    menu_ver_venda->hide();
    menu_estoque->show();
    menu_cad_prod->hide();
    menu_cad_marca->hide();
    menu_cad_fornecedor->hide();
}

void show_cad_prod(Fl_Widget* widget, void* data) {
    menu->hide();
    menu_venda->hide();
    menu_nova_venda->hide();
    menu_canc_venda->hide();
    menu_ver_venda->hide();
    menu_estoque->hide();
    menu_cad_prod->show();
    menu_cad_marca->hide();
    menu_cad_fornecedor->hide();
}

void show_cad_marca(Fl_Widget* widget, void* data) {
   menu->hide();
    menu_venda->hide();
    menu_nova_venda->hide();
    menu_canc_venda->hide();
    menu_ver_venda->hide();
    menu_estoque->hide();
    menu_cad_prod->hide();
    menu_cad_marca->show();
    menu_cad_fornecedor->hide();
} 

void show_cad_fornecedor(Fl_Widget* widget, void* data) {
    menu->hide();
    menu_venda->hide();
    menu_nova_venda->hide();
    menu_canc_venda->hide();
    menu_ver_venda->hide();
    menu_estoque->hide();
    menu_cad_prod->hide();
    menu_cad_marca->hide();
    menu_cad_fornecedor->show();
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
        show_cad_prod(widget, data);
        break;
    case 1:
        show_cad_marca(widget, data);
        break;
    case 2:
        show_cad_fornecedor(widget, data);
        break;
    
    default:
    std::cout << "Escolha inválida!" << std::endl;
    break;
    }
}
