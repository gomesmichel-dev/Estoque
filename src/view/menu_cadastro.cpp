#include "menu_cadastro.h"

MenuCadastro::MenuCadastro() {
    MenuCadastroGroup = new Fl_Group(25, 25, 1330, 695);
     MenuCadastroGroup->show();
     MenuCadastroGroup->begin();
            
      btn_confir_cadastro = new Fl_Button(1005, 150, 300, 35, "Cadastrar");
      
      btn_editar_cadastro = new Fl_Button(1005, 200, 300, 35, "Editar");
            
      btn_excluir_cadastro = new Fl_Button(1005, 250, 300, 35, "Excluir");
    
      btn_voltar = new Fl_Button(1005, 300, 110, 25, "Voltar");
     
      btn_cad_cliente = new Fl_Button(50, 25, 200, 30, "Cliente");
    
      btn_cad_fornecedor = new Fl_Button(300, 25, 200, 30, "Fornecedor");
     
      btn_cad_marca = new Fl_Button(550, 25, 200, 30, "Marca");
          
      btn_cad_produto = new Fl_Button(800, 25, 200, 30, "Produto");
    
      
    MenuCadClienteGroup = new Fl_Group(50, 100, 800, 600);
     MenuCadClienteGroup->begin();
     MenuCadClienteGroup->hide();

      in_nome_cliente = new Fl_Input(150, 150, 300, 30, "Nome");
      
      in_telefone_cliente = new Fl_Input(520, 150, 100, 30, "Telefone");
      
    MenuCadClienteGroup->end();
    
       
    MenuCadMarcaGroup = new Fl_Group(50, 100, 800, 600);
     MenuCadClienteGroup->begin();
     MenuCadClienteGroup->hide();

      in_nome_marca = new Fl_Input(150, 150, 300, 35, "Nome");
      
      in_fornecedor_marca = new Fl_Choice(550, 150, 300, 35, "Fornecedor");
      
    MenuCadMarcaGroup->end();
      
      
    MenuCadFornecedorGroup = new Fl_Group(50, 100, 800, 600);
     MenuCadFornecedorGroup->begin();
     MenuCadFornecedorGroup->hide();

      in_nome_fornecedor = new Fl_Input(150, 100, 300, 35, "Nome");
    
      in_telefone_fornecedor = new Fl_Input(550, 100, 300, 35, "Telefone");
    
      in_cnpj_fornecedor = new Fl_Input(150, 150, 300, 35, "cnpj");
      
    MenuCadFornecedorGroup->end();
      

    MenuCadProdGroup = new Fl_Group(50, 100, 800, 600);
     MenuCadProdGroup->begin();
     MenuCadProdGroup->hide();

      in_nome_prod =  new Fl_Input(150, 100, 400, 35, "Nome do Produto");
      
      in_marca_prod =  new Fl_Choice (600, 100, 300, 35, "Marca");
      
      in_categoria_prod =  new Fl_Input_Choice(150, 150, 300, 35, "Categoria");
      
      in_fornecedor_prod =  new Fl_Choice(600, 150, 300, 35, "fornecedor");
      
      in_tamanho_prod = new Fl_Input_Choice(150, 200, 100, 35, "tamanho");
      
      in_prc_compra_prod = new Fl_Input(350, 200, 100, 35, "prç compra");
       
      in_prc_venda_prod = new Fl_Input(520, 200, 100, 35, "prç venda");
      
      in_obs_prod =  new Fl_Input(150, 250, 500, 35, "obs");
      
    MenuCadProdGroup->end();
      
    MenuCadastroGroup->end();
    }