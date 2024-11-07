#ifndef CALLBACKS_H
#define CALLBACKS_H

#include <FL/Fl_Widget.H>

// Declaração das funções de callback
void show_menu(Fl_Widget* widget, void*data);
void show_estoque(Fl_Widget* widget, void* data);
void show_venda(Fl_Widget* widget, void* data);
void show_cad_prod(Fl_Widget* widget, void* data);
#endif // CALLBACKS_H