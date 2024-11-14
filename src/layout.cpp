// generated by Fast Light User Interface Designer (fluid) version 1.0309

#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/database.h"
#include "../include/config.h"
#include <vector>
Fl_Double_Window *tela_principal=(Fl_Double_Window *)0;

Fl_Group *menu=(Fl_Group *)0;
  Fl_Button *btn_menu_venda=(Fl_Button *)0;
  Fl_Button *btn_menu_estoque=(Fl_Button *)0;
  Fl_Button *btn_menu_cadastro=(Fl_Button *)0; 
  Fl_Button *btn_menu_financeiro=(Fl_Button *)0; 

Fl_Group *menu_venda=(Fl_Group *)0;
Fl_Input_Choice *buscar_nome_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *buscar_marca_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *buscar_linha_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *buscar_nome_cli=(Fl_Input_Choice *)0;
Fl_Input  *qnt_venda=(Fl_Input *)0;
Fl_Input  *desconto_venda=(Fl_Input *)0;
Fl_Button *btn_nova_venda=(Fl_Button *)0;
Fl_Button *btn_canc_venda=(Fl_Button *)0;
Fl_Button *btn_visu_venda=(Fl_Button *)0;

Fl_Group *menu_nova_venda=(Fl_Group *)0;
Fl_Input_Choice *buscar_prod=(Fl_Input_Choice *)0;
Fl_Button *btn_confir_venda=(Fl_Button *)0;
Fl_Output *prc_prod=(Fl_Output *)0;

Fl_Group *menu_canc_venda=(Fl_Group *)0;
Fl_Return_Button *btn_confir_canc=(Fl_Return_Button *)0;

Fl_Group *menu_ver_venda=(Fl_Group *)0;


Fl_Group *menu_estoque=(Fl_Group *)0;
  Fl_Choice *cad_prod_estoque=(Fl_Choice *)0;
  
Fl_Group *menu_seleção=(Fl_Group *)0;
  Fl_Choice *seletor_cadastro=(Fl_Choice *)0;


Fl_Group *menu_cadastro=(Fl_Group *)0; // Initialize appropriately
Fl_Input *in_nome_prod=(Fl_Input *)0;
Fl_Input_Choice *in_marca_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_linha_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_categoria_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_tamanho_prod=(Fl_Input_Choice *)0;
Fl_Input_Choice *in_fornecedor_prod=(Fl_Input_Choice *)0;
Fl_Input *in_obs_prod=(Fl_Input *)0;
Fl_Input *in_prc_compra_prod=(Fl_Input *)0;
Fl_Input *in_prc_venda_prod=(Fl_Input *)0;
Fl_Button *btn_confir_cadastro=(Fl_Button *)0;

Fl_Group *menu_cad_marca=(Fl_Group *)0;
Fl_Input *in_nome_marca=(Fl_Input *)0; 
Fl_Input_Choice *in_fornecedor_marca=(Fl_Input_Choice *)0;

Fl_Group *menu_cad_fornecedor=(Fl_Group *)0;
Fl_Input *in_nome_fornecedor=(Fl_Input *)0; 
Fl_Input *in_telefone_fornecedor=(Fl_Input *)0;

  //botão retornar menu
Fl_Return_Button *btn_voltar=(Fl_Return_Button *)0;

  //inicio do codigo



Fl_Double_Window* main_window() {
  
  { tela_principal = new Fl_Double_Window(0, 0, "GOMES CORP");
    tela_principal->box(FL_THIN_UP_BOX);
    
    {   menu = new Fl_Group(25, 25, 1330, 695);
      groups.push_back(menu);
      menu->show();
      { btn_menu_venda = new Fl_Button(100, 150, 300, 35, "Vender");
        btn_menu_venda->callback((Fl_Callback*)show_venda);
      } 
      { btn_menu_cadastro = new Fl_Button(100, 250, 300, 35, "Cadastros");
        btn_menu_cadastro->callback((Fl_Callback*)show_cadastro);
      } 
      { btn_menu_estoque = new Fl_Button(100, 350, 300, 35, "Estoque");
        //btn_menu_estoque->callback((Fl_Callback*)show_menu);
      }
      { btn_menu_financeiro = new Fl_Button(100, 450, 300, 35, "Financeiro");
        //btn_tela_estoque->callback((Fl_Callback*)show_estoque);
      } 
      menu->end();
    }
    { menu_venda = new Fl_Group(25, 25, 1330, 695);
      groups.push_back(menu_venda);      
      menu_venda->hide();
      
      {buscar_nome_prod = placeholder_input_choice(150, 150, 300, 30, "Buscar nome Produto");
      }
      { buscar_marca_prod = placeholder_input_choice(500, 150, 200, 30, "Buscar marca Produto");
      }
      { buscar_linha_prod = placeholder_input_choice(750, 150, 200, 30, "Buscar linha Produto");
      }
      { buscar_nome_cli = placeholder_input_choice(150, 200, 200, 30, "Buscar cliente");
      }
      { desconto_venda = new Fl_Input(750, 200, 30, 30, "Desconto");
      }
      { prc_prod = new Fl_Output(500, 200, 100, 30, "Preço:");
      }
      { qnt_venda = placeholder_input(390, 200, 50, 30, "Qtd");
      }
      { btn_confir_venda = new Fl_Button(1005, 150, 300, 30, "Confirmar");
        //btn_nova_venda->callback((Fl_Callback*)show_menu_venda); 
      }  
      { btn_voltar = new Fl_Return_Button(1005, 530, 110, 25, "Voltar");
        btn_voltar->callback((Fl_Callback*)show_menu);
      } 
      menu_venda->end();
    } 
    
    { menu_cadastro = new Fl_Group(25, 25, 1330, 695);
      groups.push_back(menu_cadastro);
      menu_cadastro->hide();
     
      { in_nome_prod = new Fl_Input(505, 50, 300, 35, "Nome do Produto");
      } 
      { in_marca_prod = new Fl_Input_Choice(505, 100, 300, 35, "Marca");
      } 
      { in_categoria_prod = new Fl_Input_Choice(505, 150, 300, 35, "Categoria");
      } 
      { in_tamanho_prod= new Fl_Input_Choice(505, 200, 300, 35, "tamanho");
      } 
      { in_fornecedor_prod = new Fl_Input_Choice(505, 250, 300, 35, "fornecedor");
      } 
      { in_obs_prod = new Fl_Input(505, 300, 300, 35, "obs");
      } 
      {  in_prc_compra_prod = new Fl_Input(505, 350, 300, 35, "preço de compra");
      } 
      { in_prc_venda_prod = new Fl_Input(505, 400, 300, 35, "preço de venda");
      } 
      { btn_confir_cadastro = new Fl_Return_Button(1005, 130, 300, 35, "Cadastrar");
        //btn_confir_cadastro->callback((Fl_Callback*)show_cad_prod);
      } 
      { btn_voltar = new Fl_Return_Button(1005, 230, 300, 35, "Voltar");
        btn_voltar->callback((Fl_Callback*)show_menu);
      } 
      menu_cadastro->end();
    }

    tela_principal->fullscreen();
    tela_principal->end();
  } 
  return tela_principal;
}
