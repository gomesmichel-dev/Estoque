#ifndef MENU_CADASTRO_H
#define MENU_CADASTRO_H
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input_Choice.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Check_Button.H>

class MenuCadastro {
   public:
   MenuCadastro();
   ~MenuCadastro();
      Fl_Group* getMenuCadastroGroup() { return MenuCadastroGroup; }
      Fl_Group* getMenuCadClienteGroup() { return MenuCadClienteGroup; }
      Fl_Group* getMenuCadMarcaGroup() { return MenuCadMarcaGroup; }
      Fl_Group* getMenuCadFornecedorGroup() { return MenuCadFornecedorGroup; }
      Fl_Group* getMenuCadProdGroup() { return MenuCadProdGroup; }
private:
   Fl_Group *MenuCadastroGroup;
      Fl_Button *btn_confir_cadastro;
      Fl_Button *btn_editar_cadastro;
      Fl_Button *btn_excluir_cadastro;
      Fl_Button *btn_cad_cliente;
      Fl_Button *btn_cad_marca;
      Fl_Button *btn_cad_fornecedor;
      Fl_Button *btn_cad_produto;
      Fl_Button *btn_voltar;

  Fl_Group *MenuCadClienteGroup;
      Fl_Input *in_nome_cliente;
      Fl_Input *in_telefone_cliente;
    
  Fl_Group *MenuCadMarcaGroup;
      Fl_Input *in_nome_marca ;
      Fl_Choice *in_fornecedor_marca;

  Fl_Group *MenuCadFornecedorGroup;
      Fl_Input *in_nome_fornecedor; 
      Fl_Input *in_telefone_fornecedor;
      Fl_Input *in_cnpj_fornecedor;

  Fl_Group  *MenuCadProdGroup;
      Fl_Input *in_nome_prod;
      Fl_Choice *in_marca_prod;
      Fl_Input_Choice *in_linha_prod;
      Fl_Input_Choice *in_categoria_prod;
      Fl_Input_Choice *in_tamanho_prod;
      Fl_Choice *in_fornecedor_prod;
      Fl_Input *in_obs_prod;
      Fl_Input *in_prc_compra_prod;
      Fl_Input *in_prc_venda_prod;
};
 
#endif