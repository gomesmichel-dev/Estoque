#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/config.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Button.H>
#include <sqlite3.h>
#include <iostream>
#include <string>
#include <vector>


void show_menu(Fl_Widget* widget, void* data) {
    exibir(menu);
}

void show_venda(Fl_Widget* widget, void* data) {
    std::cout <<"abriu as vendas" << std::endl;
    exibir(menu_venda);
}
void show_cadastro(Fl_Widget* widget, void* data) {
    std::cout <<"abriu o cadastro" << std::endl;
    exibir(menu_cadastro);
}
void show_cad_cliente(Fl_Widget* widget, void* data){
    exibir(menu_cadastro, menu_cad_cliente);
}
void show_cad_marca(Fl_Widget* widget, void* data){
    exibir(menu_cadastro, menu_cad_marca);
}
void show_cad_fornecedor(Fl_Widget* widget, void* data){
    exibir(menu_cadastro, menu_cad_fornecedor);
}
void show_cad_produto(Fl_Widget* widget, void* data){
    exibir(menu_cadastro, menu_cad_prod);
}
void show_estoque(Fl_Widget* widget, void* data) {
    exibir(menu_estoque);
}


void validate_check_buttons(Fl_Widget *w, void *data) {
    if (w == btn_entrada) {
        if (btn_entrada->value()) {
            btn_saida->value(0); 
        }
    } else if (w == btn_saida) {
        if (btn_saida->value()) {
            btn_entrada->value(0); 
        }
    }
}
