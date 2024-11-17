#ifndef CONFIG_H
#define CONFIG_H
#include <FL/Fl_Input.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input_Choice.H>
#include <vector>
#include <unordered_set>


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

Fl_Input* placeholder_input(int x, int y, int w, int h, const char* placeholder);
Fl_Choice* placeholder_choice(int x, int y, int w, int h, const char* placeholder);
Fl_Input_Choice* placeholder_input_choice(int x, int y, int w, int h, const char* placeholder);



#endif 
