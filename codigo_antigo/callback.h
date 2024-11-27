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
void show_cad_cliente(Fl_Widget* widget, void* data);
void show_cad_marca(Fl_Widget* widget, void* data);
void show_cad_fornecedor(Fl_Widget* widget, void* data);
void show_cad_produto(Fl_Widget* widget, void* data);
void show_estoque(Fl_Widget* widget, void* data);

void validate_check_buttons(Fl_Widget *w, void *data);

#endif 