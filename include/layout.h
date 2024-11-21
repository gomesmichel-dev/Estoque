// generated by Fast Light User Interface Designer (fluid) version 1.0309

#ifndef layout_h
#define layout_h

#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Input_Choice.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Check_Button.H>
#include <vector>
#include "../include/callback.h"
#include "../include/config.h"
#include <unordered_set>

class Layout : public Fl_Window {
public:
    Layout(int w, int h, const char* title);
    ~Layout();
    
private:
    Fl_Input* input1;
    Fl_Choice* choice1;
    Fl_Input_Choice* input_choice1;
    
    void setup_widgets();  
};

extern Fl_Double_Window *tela_principal;

extern Fl_Group *menu;
    extern Fl_Button *btn_menu_venda;
    extern Fl_Button *btn_menu_cadastro;
    extern Fl_Button *btn_menu_estoque;
    extern Fl_Button *btn_menu_financeiro;


extern Fl_Group *menu_venda;
    extern Fl_Input_Choice *buscar_nome_prod;
    extern Fl_Input_Choice *buscar_marca_prod;
    extern Fl_Input_Choice *buscar_linha_prod;
    extern Fl_Input_Choice *buscar_nome_cli;
    extern Fl_Input *qtd_venda;
    extern Fl_Output *prc_prod;
    extern Fl_Input *desconto_venda;
    extern Fl_Button *btn_confir_venda;

extern Fl_Group *menu_cadastro;
        extern Fl_Button *btn_confir_cadastro;
        extern Fl_Button *btn_editar_cadastro;
        extern Fl_Button *btn_excluir_cadastro;
        extern Fl_Button *btn_cad_cliente;
        extern Fl_Button *btn_cad_fornecedor;
        extern Fl_Button *btn_cad_marca;
        extern Fl_Button *btn_cad_produto;
    
    extern Fl_Group *menu_cad_cliente;
        extern Fl_Input *in_nome_cliente;
        extern Fl_Input *in_telefone_cliente;

    extern Fl_Group *menu_cad_marca;
        extern Fl_Input *in_nome_marca;
        extern Fl_Choice *in_fornecedor_marca;

    extern Fl_Group *menu_cad_fornecedor;
        extern Fl_Input *in_nome_fornecedor; 
        extern Fl_Input *in_telefone_fornecedor;
        extern Fl_Input *in_cnpj_fornecedor;
        
    extern Fl_Group  *menu_cad_prod;
        extern Fl_Input *in_nome_prod;
        extern Fl_Choice *in_marca_prod;
        extern Fl_Input_Choice *in_categoria_prod;
        extern Fl_Input_Choice *in_caracteristica_prod;
        extern Fl_Input_Choice *in_tamanho_prod;
        extern Fl_Choice *in_fornecedor_prod;
        extern Fl_Input *in_prc_compra_prod;
        extern Fl_Input *in_prc_venda_prod;
        extern Fl_Input *in_descricao_prod;
        extern Fl_Input *in_obs_prod;

extern Fl_Group *menu_estoque;
    extern Fl_Button *btn_confir_cadastro;
    extern Fl_Check_Button *btn_entrada;
    extern Fl_Check_Button *btn_saida;




Fl_Double_Window* main_window();
#endif
