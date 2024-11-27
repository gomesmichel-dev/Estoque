#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include "menu.h"

int main() {
    Fl_Window *window = new Fl_Window(1400, 750, "Menu Principal"); // Cria a janela
    Menu *menu = new Menu(); // Cria o menu
    window->end(); // Finaliza a configuração da janela
    window->show(); // Exibe a janela
    return Fl::run(); // Inicia o loop do FLTK
}
