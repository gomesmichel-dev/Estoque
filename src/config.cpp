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
    //groups.push_back(menu_estoque);
}


//// Função para apagar o placeholder quando o campo é focado
//void apagar_placeholder(Fl_Widget* widget, void* data) {
//    Fl_Input* input = (Fl_Input*)widget;
//    const char* placeholder = (const char*)data;
//
//    if (strcmp(input->value(), placeholder) == 0) {
//      std::cout <<"apagado" << std::endl;
//        input->value("");  // Limpa o campo
//    }
//}

//// Função para restaurar o placeholder quando o campo perde foco
//void restaurar_placeholder(Fl_Widget* widget, void* data) {
//    Fl_Input* input = (Fl_Input*)widget;
//    const char* placeholder = (const char*)data;
//
//    if (strlen(input->value()) == 0) {
//        input->value(placeholder);  // Restaura o placeholder
//    }
//}

void focus_callback(Fl_Widget* widget, void* data) {
    Fl_Input* input = (Fl_Input*)widget;
    const char* placeholder = (const char*)data;

    std::cout << "Callback de foco acionado" << std::endl; // Linha de depuração

    if (strcmp(input->value(), placeholder) == 0) {
        input->value("");  // Limpa o campo se corresponder ao placeholder
    }
}

void blur_callback(Fl_Widget* widget, void* data) {
    Fl_Input* input = (Fl_Input*)widget;
    const char* placeholder = (const char*)data;

    std::cout << "Callback de desfoque acionado" << std::endl; // Linha de depuração

    if (strlen(input->value()) == 0) {
        input->value(placeholder);  // Restaura o placeholder se o campo estiver vazio
    }
}

Fl_Input* placeholder_input(int x, int y, int w, int h, const char* placeholder) {
    Fl_Input* input = new Fl_Input(x, y, w, h);
    input->value(placeholder);  // Define o texto inicial como o placeholder

    input->when(FL_WHEN_ENTER_KEY | FL_WHEN_CHANGED); // Para capturar Enter e mudanças
    // Define o input para chamar o callback de foco quando ganhar foco
    input->callback(focus_callback, (void*)placeholder);
    
    // Define o input para chamar o callback de desfoque quando perder foco
    input->callback(blur_callback, (void*)placeholder);

    // Use apenas FL_WHEN_CHANGED para capturar mudanças no valor

    return input;
}

// Cria um menu dropdown (Fl_Choice) com placeholder funcional
Fl_Choice* placeholder_choice(int x, int y, int w, int h, const char* placeholder) {
    Fl_Choice* choice = new Fl_Choice(x, y, w, h);
    choice->add(placeholder);  // Adiciona o placeholder como o item inicial
    choice->value(0);          // Define o valor inicial como o placeholder
    return choice;
}

// Cria um campo combinado (Fl_Input_Choice) com placeholder funcional
Fl_Input_Choice* placeholder_input_choice(int x, int y, int w, int h, const char* placeholder) {
    Fl_Input_Choice* input_choice = new Fl_Input_Choice(x, y, w, h);
    input_choice->add(placeholder);  // Adiciona o placeholder como o item inicial
    input_choice->value(placeholder);  // Define o valor inicial como o placeholder
    return input_choice;
}