#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include "menu_cadastro.h"

int main() {
    Fl_Window *window = new Fl_Window(1400, 750, "Menu Principal");

    MenuCadastro *menu_cadastro = new MenuCadastro();
    window->add(menu_cadastro->getMenuCadastroGroup());

    window->end();
    window->show();
    return Fl::run();
}
