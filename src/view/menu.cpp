#include "menu.h"

Menu::Menu() {
    MenuGroup = new Fl_Group(25, 25, 1330, 695);
    MenuGroup->show();
    MenuGroup->begin();
    btn_menu_venda = new Fl_Button(100, 150, 300, 35, "Vender");
    btn_menu_cadastro = new Fl_Button(100, 250, 300, 35, "Cadastros");
    btn_menu_estoque = new Fl_Button(100, 350, 300, 35, "Estoque");
    btn_menu_financeiro = new Fl_Button(100, 450, 300, 35, "Financeiro");
    MenuGroup->end();
}

Menu::~Menu() {
    delete btn_menu_venda;
    delete btn_menu_cadastro;
    delete btn_menu_estoque;
    delete btn_menu_financeiro;
    delete MenuGroup;
}
