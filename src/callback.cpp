#include "../include/layout.h"
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <iostream>

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

   std::cout <<"janela venda" << std::endl;

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
   std::cout << "era pra ta cadastrando" << std::endl;
}