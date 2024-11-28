#ifndef MENU_ESTOQUE_H
#define MENU_ESTOQUE_H
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input_Choice.H>

class MenuEstoque {
   public:
   MenuEstoque();
   ~MenuEstoque();
   Fl_Group* getMenuEstoqueGroup() { return MenuEstoqueGroup; }

private:
   Fl_Group *MenuEstoqueGroup;
   Fl_Button *btn_confir_estoque;
   Fl_Check_Button *btn_entrada; 
   Fl_Check_Button *btn_saida;
   Fl_Input_Choice *buscar_nome_prod;
   Fl_Input_Choice *buscar_marca_prod;
   Fl_Input_Choice *buscar_linha_prod;
   Fl_Choice *in_fornecedor_prod;
};
 
#endif