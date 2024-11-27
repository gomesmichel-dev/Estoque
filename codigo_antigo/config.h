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


#endif