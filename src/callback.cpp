#include "layout.h"
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <iostream>

extern Fl_Group* tela_menu;
extern Fl_Group* tela_menu_venda;
extern Fl_Group* tela_menu_estoque;


void show_menu(Fl_Widget* widget, void* data){
   tela_menu->show();
   tela_menu_venda->hide();
   tela_menu_estoque->hide();
}

void show_venda(Fl_Widget* widget, void* data){
   tela_menu_venda->show();
   tela_menu->hide();
   tela_menu_estoque->hide();
   std::cout <<"janela venda" << std::endl;

}

void show_estoque(Fl_Widget* widget, void* data){
   tela_menu_estoque->show();
   tela_menu->hide();
   tela_menu_venda->hide();
}