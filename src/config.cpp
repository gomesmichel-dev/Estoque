#include "../include/config.h"
#include "../include/callback.h"
#include "../include/layout.h"
#include <initializer_list>
#include <FL/Fl_Group.H>
#include <vector>
#include <algorithm>
#include <unordered_set>

std::vector<Fl_Group*> groups;
void preencher_grupos() {
    groups.push_back(menu);
    groups.push_back(menu_venda);
    groups.push_back(menu_cadastro);
    groups.push_back(menu_cad_cliente);
    groups.push_back(menu_cad_fornecedor);
    groups.push_back(menu_cadastro);
    //groups.push_back(menu_estoque);
}


Fl_Input* placeholder_input(int x, int y, int w, int h, const char* placeholder) {
    Fl_Input* input = new Fl_Input(x, y, w, h);
    input->value(placeholder);  // Define o valor inicial como o placeholder
    input->callback(callback_placeholder, (void*)placeholder);
    input->when(FL_WHEN_NOT_CHANGED | FL_WHEN_ENTER_KEY);
    input->callback(apagar_placeholder, (void*)placeholder);
    return input;
}

Fl_Choice* placeholder_choice(int x, int y, int w, int h, const char* placeholder) {
    Fl_Choice* choice = new Fl_Choice(x, y, w, h);
    choice->add(placeholder);  // Adiciona o placeholder como primeiro item
    choice->value(0);  // Inicializa com o primeiro item
    return choice;
}
   Fl_Input_Choice* placeholder_input_choice(int x, int y, int w, int h, const char* placeholder) {
    Fl_Input_Choice* input_choice = new Fl_Input_Choice(x, y, w, h);
    input_choice->value(placeholder);
    input_choice->callback(callback_placeholder, (void*)placeholder);
    input_choice->when(FL_WHEN_NOT_CHANGED | FL_WHEN_ENTER_KEY);
    input_choice->callback(apagar_placeholder, (void*)placeholder);
    return input_choice;
}
