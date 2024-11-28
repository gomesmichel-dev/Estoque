#include "menu_venda.h"

MenuVenda::MenuVenda() {
    MenuVendaGroup = new Fl_Group(25, 25, 1330, 695);
    MenuVendaGroup->show();
    MenuVendaGroup->begin();

    buscar_nome_prod = new Fl_Input_Choice(150, 150, 300, 30, "Nome");
    
    buscar_marca_prod = new Fl_Input_Choice(500, 150, 200, 30, "Marca");
    
    buscar_nome_cli = new Fl_Input_Choice(150, 200, 200, 30, "Cliente");
    
    qnt_venda = new Fl_Input(390, 200, 50, 30, "Qtd");
    
    prc_prod = new Fl_Output(500, 200, 100, 30, "Preço:");
    
    desconto_venda = new Fl_Input(670, 200, 30, 30, "Desconto");
    
    btn_confir_venda = new Fl_Button(1005, 150, 300, 30, "Confirmar");
    
    btn_voltar = new Fl_Button(1005, 530, 110, 25, "Voltar");

    MenuVendaGroup->end(); 
}

MenuVenda::~MenuVenda() {
    delete MenuVendaGroup;
}
