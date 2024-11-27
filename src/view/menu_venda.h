#ifndef MENU_VENDA_H
#define MENU_VENDA_H
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input_Choice.H>
#include <FL/Fl_Output.H>

class MenuVenda {
   public:
   MenuVenda();
   ~MenuVenda();
   Fl_Group* getGroup() { return MenuVendaGroup; }

private:
   Fl_Group *MenuVendaGroup;
   Fl_Input_Choice *buscar_nome_prod;
   Fl_Input_Choice *buscar_marca_prod;
   Fl_Input_Choice *buscar_linha_prod;
   Fl_Input_Choice *buscar_nome_cli;
   Fl_Input  *qnt_venda;
   Fl_Input  *desconto_venda;
   Fl_Output *prc_prod;
   Fl_Button *btn_confir_venda;
   Fl_Button *btn_voltar;
};

#endif
