#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/database.h"
#include <iostream>
int main() {
    //sqlite3* db;
    //if (!conectarBanco(&db)){
     //   return -1;
   // }
    Fl_Double_Window* window = main_window();  // Cria a janela
    window->show();  // Exibe a janela
    return Fl::run();  // Inicia o loop de eventos
}