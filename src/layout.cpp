// generated by Fast Light User Interface Designer (fluid) version 1.0309

#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/database.h"
#include <vector>
Fl_Double_Window *tela_principal=(Fl_Double_Window *)0;

Fl_Group *menu=(Fl_Group *)0;
  Fl_Button *btn_tela_venda=(Fl_Button *)0;
  Fl_Button *btn_tela_estoque=(Fl_Button *)0;

Fl_Group *menu_venda=(Fl_Group *)0;
  Fl_Button *btn_nova_venda=(Fl_Button *)0;
  Fl_Button *btn_canc_venda=(Fl_Button *)0;
  Fl_Button *btn_visu_vendas=(Fl_Button *)0;

Fl_Group *menu_nova_venda=(Fl_Group *)0;
Fl_Input_Choice *buscar_prod=(Fl_Input_Choice *)0;
Fl_Return_Button *btn_confir_venda=(Fl_Return_Button *)0;
// *busca_lista_venda=( *)0;

Fl_Group *menu_estoque=(Fl_Group *)0;
  Fl_Button *cad_prod_estoque=(Fl_Button *)0;
  Fl_Button *edt_prod_estoque=(Fl_Button *)0;
  Fl_Button *exc_prod_estoque=(Fl_Button *)0;
  
Fl_Group *menu_seleção=(Fl_Group *)0;
  Fl_Choice *seletor_cadastro=(Fl_Choice *)0;


Fl_Group *menu_cad_prod=(Fl_Group *)0; // Initialize appropriately
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
        btn_nova_venda->callback((Fl_Callback*)show_menu_venda); 
      } // Fl_Button* btn_nova_venda
      { btn_canc_venda = new Fl_Button(1005, 230, 300, 35, "Cancelar venda");
      } // Fl_Button* btn_canc_venda
      { btn_visu_vendas = new Fl_Button(1005, 330, 300, 35, "Ver ultima venda");
      } // Fl_Button* btn_visu_vendas
      { btn_voltar = new Fl_Return_Button(1005, 530, 110, 25, "Voltar");
        btn_voltar->callback((Fl_Callback*)show_menu);

      } // Fl_Return_Button* btn_menu_venda
      menu_venda->end();
    } // Fl_Group* tela_menu_venda
    
    {menu_nova_venda = new Fl_Group(25, 25, 1330, 695);
        menu_nova_venda->hide();
        { buscar_prod = new Fl_Input_Choice(400, 130, 300, 35, "Buscar Produto");
        } // Fl_Input_Choice*    
        { btn_confir_venda = new Fl_Return_Button(1005, 130, 300, 35, "Confirmar Venda");
        } 
        { btn_voltar = new Fl_Return_Button(1005, 230, 300, 35, "Voltar");
          btn_voltar->callback((Fl_Callback*)show_venda);
        } // Fl_Return_Button* btn_menu_venda
        menu_nova_venda->end();
      } // Fl_Group* tela_cad_marca
    
    { menu_estoque = new Fl_Group(25, 25, 1330, 695);
      menu_estoque->hide();
      {seletor_cadastro = new Fl_Choice(400, 130, 300, 35, "Selecione Para cadastrar");
        nomeTabelas(seletor_cadastro);
      }
      { cad_prod_estoque = new Fl_Button(1005, 130, 300, 35, "Cadastar");
        cad_prod_estoque->callback((Fl_Callback*)escolha_cadastro, (void*)seletor_cadastro); 
      } // Fl_Button* cad_prod_estoque
      { edt_prod_estoque = new Fl_Button(1005, 230, 300, 35, "Editar");
      } // Fl_Button* edt_prod_estoque
      { exc_prod_estoque = new Fl_Button(1005, 330, 300, 35, "Excluir");
      } // Fl_Button* exc_prod_estoque
      { btn_voltar = new Fl_Return_Button(1005, 530, 110, 25, "Voltar");
        btn_voltar->callback((Fl_Callback*)show_menu);
      } // Fl_Return_Button* btn_voltar
      menu_estoque->end();
    } // Fl_Group* tela_menu_estoque
    
    { menu_cad_prod = new Fl_Group(25, 25, 1330, 695);
        menu_cad_prod->hide();
       
        { in_nome_prod = new Fl_Input(505, 50, 300, 35, "Nome do Produto");
        } // Fl_Input_Choice* o
        { in_marca_prod = new Fl_Input_Choice(505, 100, 300, 35, "Marca");
        } // Fl_Input_Choice* o
        { in_categoria_prod = new Fl_Input_Choice(505, 150, 300, 35, "Categoria");
        } // Fl_Input_Choice* o
        { in_tamanho_prod= new Fl_Input_Choice(505, 250, 300, 35, "tamanho");
        } // Fl_Input_Choice* o
        { in_fornecedor_prod = new Fl_Input_Choice(505, 300, 300, 35, "fornecedor");
        } // Fl_Input_Choice* o
        { in_obs_prod = new Fl_Input(505, 400, 300, 35, "obs");
        } // Fl_Input_Choice* o
        {  in_prc_compra_prod = new Fl_Input(505, 450, 300, 35, "preço de compra");
        } // Fl_Input* o
        { in_prc_venda_prod = new Fl_Input(505, 500, 300, 35, "preço de venda");
        } // Fl_Input* o
        { btn_confir_cadastro = new Fl_Return_Button(1005, 430, 300, 25, "Cadastrar");
          btn_confir_cadastro->callback((Fl_Callback*)show_cad_prod);
        } 
        { btn_voltar = new Fl_Return_Button(1005, 230, 300, 35, "Voltar");
          btn_voltar->callback((Fl_Callback*)show_estoque);
        } // Fl_Return_Button* btn_menu_venda
        menu_cad_prod->end();
      } // Fl_Group* tela_cad_prod
    
    {menu_cad_marca = new Fl_Group(25, 25, 1330, 695);
        menu_cad_marca->hide();
        { in_nome_marca = new Fl_Input(400, 130, 300, 35, "Nome da Marca");
        } // Fl_Input_Choice* o
        { in_fornecedor_marca = new Fl_Input_Choice(400, 230, 300, 35, "Fornecedor");
        } // Fl_Input_Choice* o    
        { btn_confir_cadastro = new Fl_Return_Button(1005, 130, 300, 35, "Cadastrar");
          btn_confir_cadastro->callback((Fl_Callback*)show_cad_prod);
        } 
        { btn_voltar = new Fl_Return_Button(1005, 230, 300, 35, "Voltar");
          btn_voltar->callback((Fl_Callback*)show_estoque);
        } // Fl_Return_Button* btn_menu_venda
        menu_cad_marca->end();
      } // Fl_Group* tela_cad_marca
         
      {menu_cad_fornecedor = new Fl_Group(25, 25, 1330, 695);
        menu_cad_fornecedor->hide();
      { in_nome_fornecedor = new Fl_Input(400, 130, 300, 35, "Nome do Fornecedor");
      } // Fl_Input_Choice* o
      { in_telefone_fornecedor = new Fl_Input(400, 230, 300, 35, "Telefone do Fornecedor");
      } // Fl_Input_Choice* o    
      { btn_confir_cadastro = new Fl_Return_Button(1005, 130, 300, 35, "Cadastrar");
        btn_confir_cadastro->callback((Fl_Callback*)show_cad_prod);
      } 
      { btn_voltar = new Fl_Return_Button(1005, 230, 300, 35, "Voltar");
        btn_voltar->callback((Fl_Callback*)show_estoque);
      } // Fl_Return_Button* btn_menu_venda
      menu_cad_fornecedor->end();
      } // Fl_Group* tela_cad_marca

    tela_principal->size_range(1364, 739, 1364, 739);
    tela_principal->end();
  } // Fl_Double_Window* tela_principal
  return tela_principal;
}
