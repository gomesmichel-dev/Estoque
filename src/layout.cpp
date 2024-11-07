// generated by Fast Light User Interface Designer (fluid) version 1.0309

#include "../include/layout.h"
#include "../include/callback.h"

Fl_Double_Window *tela_principal=(Fl_Double_Window *)0;

Fl_Group *menu=(Fl_Group *)0;
  Fl_Button *btn_tela_venda=(Fl_Button *)0;
  Fl_Button *btn_tela_estoque=(Fl_Button *)0;

Fl_Group *menu_venda=(Fl_Group *)0;
  Fl_Button *btn_nova_venda=(Fl_Button *)0;
  Fl_Button *btn_canc_venda=(Fl_Button *)0;
  Fl_Button *btn_visu_vendas=(Fl_Button *)0;

Fl_Group *menu_estoque=(Fl_Group *)0;
  Fl_Button *cad_prod_estoque=(Fl_Button *)0;
  Fl_Button *edt_prod_estoque=(Fl_Button *)0;
  Fl_Button *exc_prod_estoque=(Fl_Button *)0;
  
Fl_Group *menu_cad_prod=(Fl_Group *)0; // Initialize appropriately
Fl_Input_Choice *in_nome_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_marca_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_categoria_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_caracteristica_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_tamanho_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_fornecedor_prod=(Fl_Input_Choice *)0;
Fl_Input *in_prc_compra_prod=(Fl_Input *)0;
Fl_Input *in_prc_venda_prod=(Fl_Input *)0;

  //botão retornar menu
Fl_Return_Button *btn_voltar=(Fl_Return_Button *)0;

  //inicio do codigo
Fl_Double_Window* main_window() {
  
  { tela_principal = new Fl_Double_Window(1364, 739, "GOMES CORP");
    tela_principal->box(FL_THIN_UP_BOX);
    
    {   menu = new Fl_Group(25, 25, 1330, 695);
      
      { btn_tela_venda = new Fl_Button(1005, 130, 300, 35, "Vender");
        btn_tela_venda->callback((Fl_Callback*)show_venda);
      } // Fl_Button* btn_tela_venda
      
      { btn_tela_estoque = new Fl_Button(1005, 230, 300, 35, "estoque");
        btn_tela_estoque->callback((Fl_Callback*)show_estoque);
      } // Fl_Button* btn_tela_estoque
      menu->end();
    } // Fl_Group* tela_menu
    
    { menu_venda = new Fl_Group(25, 25, 1330, 695);
      menu_venda->hide();
      { btn_nova_venda = new Fl_Button(1005, 130, 300, 35, "Nova venda");
      } // Fl_Button* btn_nova_venda
      { btn_canc_venda = new Fl_Button(1005, 230, 300, 35, "button");
      } // Fl_Button* btn_canc_venda
      { btn_visu_vendas = new Fl_Button(1005, 330, 300, 35, "button");
      } // Fl_Button* btn_visu_vendas
      { btn_voltar = new Fl_Return_Button(1005, 530, 110, 25, "Voltar2");
        btn_voltar->callback((Fl_Callback*)show_menu);

      } // Fl_Return_Button* btn_menu_venda
      menu_venda->end();
    } // Fl_Group* tela_menu_venda
    
    { menu_estoque = new Fl_Group(25, 25, 1330, 695);
      menu_estoque->hide();
      { cad_prod_estoque = new Fl_Button(1005, 130, 300, 35, "Cadastar Produto");
        cad_prod_estoque->callback((Fl_Callback*)show_cad_prod);
      } // Fl_Button* cad_prod_estoque
      { edt_prod_estoque = new Fl_Button(1005, 230, 300, 35, "Editar Produto");
      } // Fl_Button* edt_prod_estoque
      { exc_prod_estoque = new Fl_Button(1005, 330, 300, 35, "Excluir Produto");
      } // Fl_Button* exc_prod_estoque
      { btn_voltar = new Fl_Return_Button(1005, 530, 110, 25, "Voltar1");
        btn_voltar->callback((Fl_Callback*)show_menu);
      } // Fl_Return_Button* btn_voltar
      menu_estoque->end();
    } // Fl_Group* tela_menu_estoque
    
    { menu_cad_prod = new Fl_Group(25, 25, 1330, 695);
        menu_cad_prod->hide();
        { in_nome_prod = new Fl_Input_Choice(505, 50, 110, 35, "Nome do Produto");
        } // Fl_Input_Choice* o
        { in_marca_prod = new Fl_Input_Choice(505, 100, 110, 35, "Marca");
        } // Fl_Input_Choice* o
        { in_categoria_prod = new Fl_Input_Choice(505, 150, 110, 35, "Categoria");
        } // Fl_Input_Choice* o
        { in_caracteristica_prod = new Fl_Input_Choice(505, 200, 110, 35, "caracteristicas");
        } // Fl_Input_Choice* o
        { in_tamanho_prod= new Fl_Input_Choice(505, 250, 110, 35, "tamanho");
        } // Fl_Input_Choice* o
        { in_fornecedor_prod = new Fl_Input_Choice(505, 300, 110, 35, "fornecedor");
        } // Fl_Input_Choice* o
        {  in_prc_compra_prod = new Fl_Input(505, 350, 110, 35, "pre\303\247o de compra");
        } // Fl_Input* o
        { in_prc_venda_prod = new Fl_Input(505, 400, 110, 35, "pre\303\247o de venda");
        } // Fl_Input* o
        { btn_voltar = new Fl_Return_Button(1005, 530, 110, 25, "Voltar2");
          btn_voltar->callback((Fl_Callback*)show_estoque);

      } // Fl_Return_Button* btn_menu_venda
        menu_cad_prod->end();
      } // Fl_Group* tela_cad_prod
    
    tela_principal->size_range(1364, 739, 1364, 739);
    tela_principal->end();
  } // Fl_Double_Window* tela_principal
  return tela_principal;
}