#include "menu_estoque.h"
  
MenuEstoque::MenuEstoque(){
 MenuEstoqueGroup = new Fl_Group(25, 25, 1330, 695);
 MenuEstoqueGroup->show();
      
  btn_entrada = new Fl_Check_Button(50, 50, 60, 50, "Entrada");
        
  btn_saida = new Fl_Check_Button(150, 50, 60, 50, "Saida");

  btn_confir_estoque = new Fl_Button(1005, 150, 300, 35, "Confirmar");
  
  buscar_nome_prod = new Fl_Input_Choice(150, 100, 400, 35, "Nome do Produto");
  
  buscar_marca_prod =  new Fl_Input_Choice (600, 100, 300, 35, "Marca");
  
  buscar_linha_prod =  new Fl_Input_Choice(150, 150, 300, 35, "Categoria");
  
  in_fornecedor_prod =  new Fl_Choice(600, 150, 300, 35, "fornecedor");
      
MenuEstoqueGroup->end();
}

MenuEstoque::~MenuEstoque(){
  delete MenuEstoqueGroup;
}