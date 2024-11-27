{menu_estoque = new Fl_Group(25, 25, 1330, 695);
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