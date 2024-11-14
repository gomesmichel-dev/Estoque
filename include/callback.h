#ifndef CALLBACK_H
#define CALLBACK_H

#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Input_Choice.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Choice.H>
#include <sqlite3.h>
#include <string>

void show_menu(Fl_Widget* widget, void* data);
void show_venda(Fl_Widget* widget, void* data);
void show_cadastro(Fl_Widget* widget, void* data);
//void show_estoque(Fl_Widget* widget, void* data);
//void cadastrar_produto(Fl_Widget*, void*);
//void escolha_cadastro(Fl_Widget* widget, void* data);
//void show_cad_prod(Fl_Widget* widget, void* data);
//void show_cad_fornecedor(Fl_Widget* widget, void* data);
//void show_menu_venda(Fl_Widget* widget, void* data);
//void show_menu__canc_venda(Fl_Widget* widget, void* data);
//void show_menu_ver_venda(Fl_Widget* widget, void* data);
void callback_placeholder(Fl_Widget* w, void* data);
void apagar_placeholder(Fl_Widget* w, void* data);
#endif // CALLBACK_H