
#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/database.h"
#include "../include/config.h"
#include <vector>
#include <algorithm>

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
  Fl_Output *prc_prod=(Fl_Output *)0;
  Fl_Button *btn_confir_venda=(Fl_Button *)0;

Fl_Group *menu_cadastro=(Fl_Group *)0;
  Fl_Button *btn_confir_cadastro=(Fl_Button *)0;
  Fl_Button *btn_editar_cadastro=(Fl_Button *)0;
  Fl_Button *btn_excluir_cadastro=(Fl_Button *)0;
  Fl_Button *btn_cad_cliente=(Fl_Button *)0;
  Fl_Button *btn_cad_marca=(Fl_Button *)0;
  Fl_Button *btn_cad_fornecedor=(Fl_Button *)0;
  Fl_Button *btn_cad_produto=(Fl_Button *)0;
  
  Fl_Group *menu_cad_cliente=(Fl_Group *)0;
    Fl_Input *in_nome_cliente=(Fl_Input *)0;
    Fl_Input *in_telefone_cliente=(Fl_Input *)0;
    
  Fl_Group *menu_cad_marca=(Fl_Group *)0;
    Fl_Input *in_nome_marca=(Fl_Input *)0; 
    Fl_Choice *in_fornecedor_marca=(Fl_Choice *)0;

  Fl_Group *menu_cad_fornecedor = (Fl_Group *)0;
    Fl_Input *in_nome_fornecedor = (Fl_Input *)0; 
    Fl_Input *in_telefone_fornecedor = (Fl_Input *)0;
    Fl_Input *in_cnpj_fornecedor = (Fl_Input *)0;

  Fl_Group  *menu_cad_prod =(Fl_Group *)0;
    Fl_Input *in_nome_prod =(Fl_Input *)0;
    Fl_Choice *in_marca_prod=(Fl_Choice *)0;
    Fl_Input_Choice *in_linha_prod=(Fl_Input_Choice *)0;
    Fl_Input_Choice *in_categoria_prod=(Fl_Input_Choice *)0;
    Fl_Input_Choice *in_tamanho_prod=(Fl_Input_Choice *)0;
    Fl_Choice *in_fornecedor_prod=(Fl_Choice *)0;
    Fl_Input *in_obs_prod=(Fl_Input *)0;
    Fl_Input *in_prc_compra_prod=(Fl_Input *)0;
    Fl_Input *in_prc_venda_prod=(Fl_Input *)0;
    
  Fl_Group *menu_estoque = (Fl_Group *)0;
    Fl_Button *btn_confir_estoque=(Fl_Button *)0;
    Fl_Check_Button *btn_entrada=(Fl_Check_Button *)0; 
    Fl_Check_Button *btn_saida=(Fl_Check_Button *)0;
    Fl_Input_Choice *buscar_fornecedor_prod=(Fl_Input_Choice *)0;



Fl_Return_Button *btn_voltar=(Fl_Return_Button *)0;



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
        btn_menu_estoque->callback((Fl_Callback*)show_estoque);
      }
      { btn_menu_financeiro = new Fl_Button(100, 450, 300, 35, "Financeiro");
        //btn_tela_estoque->callback((Fl_Callback*)show_estoque);
      } 
      menu->end();
    }
    { menu_venda = new Fl_Group(25, 25, 1330, 695);
      groups.push_back(menu_venda);      
      menu_venda->hide();
      
      {buscar_nome_prod = new Fl_Input_Choice(150, 150, 300, 30, "Nome");
      }
      { buscar_marca_prod = new Fl_Input_Choice(500, 150, 200, 30, "Marca");
      }
      { buscar_nome_cli = new Fl_Input_Choice(150, 200, 200, 30, "cliente");
      }
      { qnt_venda = new Fl_Input(390, 200, 50, 30, "Qtd");
      }
      { prc_prod = new Fl_Output(500, 200, 100, 30, "Preço:");
      }
      { desconto_venda = new Fl_Input(600, 200, 30, 30, "Desconto");
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
            
      { btn_confir_cadastro = new Fl_Button(1005, 150, 300, 35, "Cadastrar");
      }       
      { btn_editar_cadastro = new Fl_Button(1005, 200, 300, 35, "Editar");
      }       
      { btn_excluir_cadastro = new Fl_Button(1005, 250, 300, 35, "Excluir");
      }
      { btn_voltar = new Fl_Return_Button(1005, 300, 110, 25, "Voltar");
        btn_voltar->callback((Fl_Callback*)show_menu);
      } 
      { btn_cad_cliente = new Fl_Button(50, 25, 200, 30, "Cliente");
        btn_cad_cliente->callback((Fl_Callback*)show_cad_cliente);
      }
      { btn_cad_fornecedor = new Fl_Button(300, 25, 200, 30, "Fornecedor");
        btn_cad_fornecedor->callback((Fl_Callback*)show_cad_fornecedor);
      } 
      { btn_cad_marca = new Fl_Button(550, 25, 200, 30, "Marca");
        btn_cad_marca->callback((Fl_Callback*)show_cad_marca);
      }      
      { btn_cad_produto = new Fl_Button(800, 25, 200, 30, "Produto");
        btn_cad_produto->callback((Fl_Callback*)show_cad_produto);      
      }
      
      menu_cad_cliente = new Fl_Group(50, 100, 800, 600);{
       groups.push_back(menu_cad_cliente);
       menu_cad_cliente->hide();

        { in_nome_cliente = new Fl_Input(150, 150, 300, 30, "Nome");
        } 
        { in_telefone_cliente = new Fl_Input(520, 150, 100, 30, "Telefone");
        } 
        menu_cad_cliente->end();
      }
       
      menu_cad_marca = new Fl_Group(50, 100, 800, 600);{
       groups.push_back(menu_cad_marca);
       menu_cad_cliente->hide();

        { in_nome_marca = new Fl_Input(150, 150, 300, 35, "Nome");
        } 
        { in_fornecedor_marca = new Fl_Choice(550, 150, 300, 35, "Fornecedor");
        } 
        menu_cad_cliente->end();
      }
      
      menu_cad_fornecedor = new Fl_Group(50, 100, 800, 600);{
       groups.push_back(menu_cad_fornecedor);
       menu_cad_fornecedor->hide();

        { in_nome_fornecedor = new Fl_Input(150, 100, 300, 35, "Nome");
        } 
        { in_telefone_fornecedor = new Fl_Input(550, 100, 300, 35, "Telefone");
        }
        { in_cnpj_fornecedor = new Fl_Input(150, 150, 300, 35, "cnpj");
        }
        menu_cad_fornecedor->end();
      }

       menu_cad_prod = new Fl_Group(50, 100, 800, 600);{
        groups.push_back(menu_cad_prod);
        menu_cad_prod->hide();

        { in_nome_prod =  new Fl_Input(150, 100, 400, 35, "Nome do Produto");
        } 
        { in_marca_prod =  new Fl_Choice (600, 100, 300, 35, "Marca");
        } 
        { in_categoria_prod =  new Fl_Input_Choice(150, 150, 300, 35, "Categoria");
        } 
        { in_fornecedor_prod =  new Fl_Choice(600, 150, 300, 35, "fornecedor");
        } 
        { in_tamanho_prod = new Fl_Input_Choice(150, 200, 100, 35, "tamanho");
        } 
        {  in_prc_compra_prod = new Fl_Input(350, 200, 100, 35, "prç compra");
        } 
        { in_prc_venda_prod = new Fl_Input(520, 200, 100, 35, "prç venda");
        } 
        { in_obs_prod =  new Fl_Input(150, 250, 500, 35, "obs");
        } 

          menu_cad_prod->end();
      }
      menu_cadastro->end();
    }

    {menu_estoque = new Fl_Group(25, 25, 1330, 695);
      groups.push_back(menu_estoque);
      menu_estoque->hide();
      
      { btn_entrada = new Fl_Check_Button(50, 50, 60, 50, "Entrada");
        btn_entrada->callback(validate_check_buttons);
      }       
      { btn_saida = new Fl_Check_Button(150, 50, 60, 50, "Saida");
        btn_saida->callback(validate_check_buttons);
      }
      { btn_confir_estoque = new Fl_Button(1005, 150, 300, 35, "Confirmar");
      } 
      { buscar_nome_prod = new Fl_Input_Choice(150, 100, 400, 35, "Nome do Produto");
      } 
      { buscar_marca_prod =  new Fl_Input_Choice (600, 100, 300, 35, "Marca");
      } 
      { buscar_linha_prod =  new Fl_Input_Choice(150, 150, 300, 35, "Categoria");
      } 
      { buscar_fornecedor_prod =  new Fl_Input_Choice(600, 150, 300, 35, "fornecedor");
      } 
    }
    tela_principal->end();
  } 
  return tela_principal;
}
