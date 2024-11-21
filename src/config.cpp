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

template <>
void configure_placeholder<Fl_Input>(Fl_Input* input, const char* placeholder) {
    // Configura o texto inicial e a cor
    input->value(placeholder);
    input->textcolor(FL_GRAY);

    // Callback para gerenciar comportamento ao mudar o valor
    input->callback([](Fl_Widget* widget, void* data) {
        auto* input_field = static_cast<Fl_Input*>(widget);
        const char* placeholder = static_cast<const char*>(data);

        // Se o valor atual for igual ao placeholder, limpa o campo
        if (strcmp(input_field->value(), placeholder) == 0) {
            input_field->value(""); 
            input_field->textcolor(FL_BLACK);
        } else if (std::string(input_field->value()).empty()) {
            // Se o campo estiver vazio, restaura o placeholder
            input_field->value(placeholder);
            input_field->textcolor(FL_GRAY);
        }

        input_field->redraw(); // Atualiza a interface
    }, (void*)placeholder);

    // Callback para gerenciar comportamento ao focar no campo
    input->callback([](Fl_Widget* widget, void* data) {
        auto* input_field = static_cast<Fl_Input*>(widget);
        const char* placeholder = static_cast<const char*>(data);

        // Limpa o placeholder ao focar no campo
        if (strcmp(input_field->value(), placeholder) == 0) {
            input_field->value("");
            input_field->textcolor(FL_BLACK);
        }
    }, (void*)placeholder);

    // Callback para gerenciar comportamento ao perder o foco
    input->callback([](Fl_Widget* widget, void* data) {
        auto* input_field = static_cast<Fl_Input*>(widget);
        const char* placeholder = static_cast<const char*>(data);

        // Restaura o placeholder se o campo estiver vazio ao perder o foco
        if (std::string(input_field->value()).empty()) {
            input_field->value(placeholder);
            input_field->textcolor(FL_GRAY);
        }
    }, (void*)placeholder);
}

template <>
void configure_placeholder<Fl_Choice>(Fl_Choice* choice, const char* placeholder) {
    // Configura o texto inicial e a cor
    choice->textcolor(FL_GRAY);
    choice->add(placeholder); // Adiciona o placeholder como uma opção

    // Callback para gerenciar comportamento ao selecionar uma opção
    choice->callback([](Fl_Widget* widget, void* data) {
        auto* choice_field = static_cast<Fl_Choice*>(widget);
        const char* placeholder = static_cast<const char*>(data);

        // Limpa o placeholder se uma opção for selecionada
        if (choice_field->value() != -1) { // Verifica se uma opção válida foi selecionada
            choice_field->textcolor(FL_BLACK);
        } else {
            choice_field->textcolor(FL_GRAY);
        }
    }, (void*)placeholder);
}

// Especialização para Fl_Input_Choice
template <>
void configure_placeholder<Fl_Input_Choice>(Fl_Input_Choice* input_choice, const char* placeholder) {
    // Configura o texto inicial e a cor
    input_choice->value(placeholder);
    input_choice->textcolor(FL_GRAY);
    input_choice->when(FL_WHEN_CHANGED);

    // Callback para gerenciar comportamento
    input_choice->callback([](Fl_Widget* widget, void* data) {
        auto* input_choice_field = static_cast<Fl_Input_Choice*>(widget);
        const std::string placeholder = static_cast<const char*>(data);

        // Limpa o placeholder ao focar no campo
        if (input_choice_field->textcolor() == FL_GRAY) {
            input_choice_field->value("");
            input_choice_field->textcolor(FL_BLACK);
        }

        // Restaura o placeholder se o campo ficar vazio ao perder o foco
        if (std::string(input_choice_field->value()).empty()) {
            input_choice_field->value(placeholder.c_str());
            input_choice_field->textcolor(FL_GRAY);
        }

        input_choice_field->redraw();  // Atualiza a interface
    }, (void*)placeholder);
}


// Funções para criação de widgets
Fl_Input* placeholder_input(int x, int y, int w, int h, const char* placeholder) {
    Fl_Input* input = new Fl_Input(x, y, w, h);
    configure_placeholder(input, placeholder);  // Configura o comportamento do placeholder
    return input;
}

Fl_Choice* placeholder_choice(int x, int y, int w, int h, const char* placeholder) {
    Fl_Choice* choice = new Fl_Choice(x, y, w, h);
    configure_placeholder(choice, placeholder);  // Configura o comportamento do placeholder para Fl_Choice
    return choice;
}

Fl_Input_Choice* placeholder_input_choice(int x, int y, int w, int h, const char* placeholder) {
    Fl_Input_Choice* input_choice = new Fl_Input_Choice(x, y, w, h);
    configure_placeholder(input_choice, placeholder);  // Configura o comportamento do placeholder para Fl_Input_Choice
    return input_choice;
}

