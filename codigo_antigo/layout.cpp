
#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/database.h"
#include "../include/config.h"
#include <vector>
#include <algorithm>

Fl_Double_Window *tela_principal=(Fl_Double_Window *)0;







Fl_Return_Button *btn_voltar=(Fl_Return_Button *)0;



Fl_Double_Window* main_window() {
  
  { tela_principal = new Fl_Double_Window(0, 0, "GOMES CORP");
    tela_principal->box(FL_THIN_UP_BOX);
    
    tela_principal->end();
  } 
  return tela_principal;
}
