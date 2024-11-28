#ifndef MENU_H
#define MENU_H

#include <FL/Fl.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Group.H>

class Menu {
public:
   Menu();
   ~Menu();
   Fl_Group* getMenuGroup() { return MenuGroup; }

private:
   Fl_Group *MenuGroup;
   Fl_Button *btn_menu_venda;
   Fl_Button *btn_menu_cadastro;
   Fl_Button *btn_menu_estoque;
   Fl_Button *btn_menu_financeiro;
};

#endif
