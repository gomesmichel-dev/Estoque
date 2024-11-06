#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "layout.h"

int main() {
    Fl_Double_Window* window = main_window();  // Cria a janela
    window->show();  // Exibe a janela
    return Fl::run();  // Inicia o loop de eventos
}