#include "../include/config.h"
#include "../include/callback.h"
#include "../include/layout.h"
#include <initializer_list>
#include <FL/Fl_Group.H>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cstring>
#include <iostream>


std::vector<Fl_Group*> groups;
void preencher_grupos() {
    groups.push_back(menu);
    groups.push_back(menu_venda);
    groups.push_back(menu_cadastro);
    groups.push_back(menu_cad_cliente);
    groups.push_back(menu_cad_fornecedor);
    groups.push_back(menu_cadastro);
    groups.push_back(menu_estoque);
}



void focus_callback(Fl_Widget* widget, void* data) {
    Fl_Input* input = (Fl_Input*)widget;
    const char* placeholder = (const char*)data;

    std::cout << "Callback de foco acionado" << std::endl; 

    if (strcmp(input->value(), placeholder) == 0) {
        input->value("");  // Limpa o campo se corresponder ao placeholder
    }
}

void blur_callback(Fl_Widget* widget, void* data) {
    Fl_Input* input = (Fl_Input*)widget;
    const char* placeholder = (const char*)data;

    std::cout << "Callback de desfoque acionado" << std::endl; 

    if (strlen(input->value()) == 0) {
        input->value(placeholder);  
    }
}

Fl_Input* placeholder_input(int x, int y, int w, int h, const char* placeholder) {
    Fl_Input* input = new Fl_Input(x, y, w, h);
    input->value(placeholder); 

    input->when(FL_WHEN_ENTER_KEY | FL_WHEN_CHANGED); 
    input->callback(focus_callback, (void*)placeholder);
    
    input->callback(blur_callback, (void*)placeholder);

    return input;
}

Fl_Choice* placeholder_choice(int x, int y, int w, int h, const char* placeholder) {
    Fl_Choice* choice = new Fl_Choice(x, y, w, h);
    choice->add(placeholder);
    choice->value(0);          
    return choice;
}

Fl_Input_Choice* placeholder_input_choice(int x, int y, int w, int h, const char* placeholder) {
    Fl_Input_Choice* input_choice = new Fl_Input_Choice(x, y, w, h);
    input_choice->add(placeholder);  
    input_choice->value(placeholder); 
    return input_choice;
}