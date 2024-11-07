// callback.h
#ifndef CALLBACK_H
#define CALLBACK_H

#include <FL/Fl.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Input_Choice.H>
#include <FL/Fl_Input.H>
#include <sqlite3.h>
#include <string>

// Declaração das funções de callback
void show_menu(Fl_Widget* widget, void* data);
void show_estoque(Fl_Widget* widget, void* data);
void show_venda(Fl_Widget* widget, void* data);
void show_cad_prod(Fl_Widget* widget, void* data);
void cadastrarProduto(Fl_Widget*, void*);

// Funções auxiliares para o banco de dados
int inserirOuObterMarca(const std::string& marca);
int inserirOuObterTipo(const std::string& tipo);
#endif // CALLBACK_H