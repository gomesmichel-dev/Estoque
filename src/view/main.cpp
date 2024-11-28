#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include "menu.h"

int main() {
    Fl_Window *window = new Fl_Window(0, 0, "Menu Principal");

    Menu *menu = new Menu();
    window->add(menu->getMenuGroup());

    window->end();
    window->show();
    return Fl::run();
}
