#ifndef CONFIG_H
#define CONFIG_H
#include <FL/Fl_Input.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input_Choice.H>
#include <vector>
#include <unordered_set>
#include <string>

extern std::vector<Fl_Group*> groups;
void preencher_grupos();

template<typename... Groups>
void exibir(Groups... visible_groups) {
    std::unordered_set<Fl_Group*> groups_to_show = { visible_groups... };

    for (auto* group : groups) {
        if (groups_to_show.count(group)) {
            group->show();
        } else {
            group->hide();
        }
    }
}

// Declaração do template genérico
template <typename T>
void configure_placeholder(T* input, const char* placeholder);

// Implementações específicas
template <>
void configure_placeholder<Fl_Input>(Fl_Input* input, const char* placeholder);

template <>
void configure_placeholder<Fl_Choice>(Fl_Choice* choice, const char* placeholder);

template <>
void configure_placeholder<Fl_Input_Choice>(Fl_Input_Choice* input_choice, const char* placeholder);

// Funções para criação de widgets
Fl_Input* placeholder_input(int x, int y, int w, int h, const char* placeholder);
Fl_Choice* placeholder_choice(int x, int y, int w, int h, const char* placeholder);
Fl_Input_Choice* placeholder_input_choice(int x, int y, int w, int h, const char* placeholder);


#endif