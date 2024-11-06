// generated by Fast Light User Interface Designer (fluid) version 1.0309

#include "layout.h"
#include "callback.h"
Fl_Double_Window *tela_principal=(Fl_Double_Window *)0;

Fl_Group *tela_menu=(Fl_Group *)0;

Fl_Button *btn_tela_venda=(Fl_Button *)0;

Fl_Button *btn_tela_estoque=(Fl_Button *)0;

Fl_Group *tela_menu_venda=(Fl_Group *)0;

Fl_Return_Button *btn_menu_venda=(Fl_Return_Button *)0;

Fl_Button *btn_nova_venda=(Fl_Button *)0;

Fl_Button *btn_canc_venda=(Fl_Button *)0;

Fl_Button *btn_visu_vendas=(Fl_Button *)0;

Fl_Group *tela_menu_estoque=(Fl_Group *)0;

Fl_Return_Button *btn_menu_estoque=(Fl_Return_Button *)0;

Fl_Button *cad_prod_estoque=(Fl_Button *)0;

Fl_Button *exc_prod_estoque=(Fl_Button *)0;

Fl_Button *edt_prod_estoque=(Fl_Button *)0;

Fl_Double_Window* main_window() {
  { tela_principal = new Fl_Double_Window(1364, 739, "GOMES CORP");
    tela_principal->box(FL_THIN_UP_BOX);
    { tela_menu = new Fl_Group(15, 25, 1330, 695);
      { btn_tela_venda = new Fl_Button(1005, 130, 300, 35, "Vender");
        btn_tela_venda->callback((Fl_Callback*)show_venda);
      } // Fl_Button* btn_tela_venda
      { btn_tela_estoque = new Fl_Button(1005, 230, 300, 35, "estoque");
        btn_tela_estoque->callback((Fl_Callback*)show_estoque);

      } // Fl_Button* btn_tela_estoque
      tela_menu->end();
    } // Fl_Group* tela_menu
    { tela_menu_venda = new Fl_Group(15, 25, 1330, 695);
      tela_menu_venda->hide();
      { btn_menu_venda = new Fl_Return_Button(1005, 530, 110, 25, "Voltar");
        btn_menu_venda->callback((Fl_Callback*)show_menu);
      } // Fl_Return_Button* btn_menu_venda
      { btn_nova_venda = new Fl_Button(1005, 330, 300, 35, "Nova venda");
      } // Fl_Button* btn_nova_venda
      { btn_canc_venda = new Fl_Button(1005, 230, 300, 35, "Cancelar venda");
      } // Fl_Button* btn_canc_venda
      { btn_visu_vendas = new Fl_Button(1005, 130, 300, 35, "Visualizar vendas");
      } // Fl_Button* btn_visu_vendas
      tela_menu_venda->end();
    } // Fl_Group* tela_menu_venda
    { tela_menu_estoque = new Fl_Group(15, 25, 1330, 695);
      tela_menu_estoque->hide();
      { btn_menu_estoque = new Fl_Return_Button(1005, 530, 110, 25, "Voltar");
        btn_menu_estoque->callback((Fl_Callback*)show_menu);

      } // Fl_Return_Button* btn_menu_estoque
      { cad_prod_estoque = new Fl_Button(1005, 330, 300, 35, "Cadastar Produto");
      } // Fl_Button* cad_prod_estoque
      { exc_prod_estoque = new Fl_Button(1005, 230, 300, 35, "Excluir Produto");
      } // Fl_Button* exc_prod_estoque
      { edt_prod_estoque = new Fl_Button(1005, 130, 300, 35, "Editar Produto");
      } // Fl_Button* edt_prod_estoque
      tela_menu_estoque->end();
    } // Fl_Group* tela_menu_estoque
    tela_principal->size_range(1364, 739, 1364, 739);
    tela_principal->end();
  } // Fl_Double_Window* tela_principal
  return tela_principal;
}
