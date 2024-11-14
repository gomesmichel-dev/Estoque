#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "../include/layout.h"
#include "../include/callback.h"
#include "../include/database.h"
#include "../include/config.h"

#include <iostream>
int main(){
if (conectarNoBanco("/home/g0m3s/Estoque/db/estoque.db") != 0) {
        return 1;
    }
    Fl_Double_Window* window = main_window();  
    window->show();  
    return Fl::run(); 
}
