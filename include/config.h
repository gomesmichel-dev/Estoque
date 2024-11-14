#ifndef CONFIG_H
#define CONFIG_H
#include <FL/Fl_Input.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input_Choice.H>
#include <vector>

void preencher_grupos();
void exibir(Fl_Group* visible_group);

Fl_Input* placeholder_input(int x, int y, int w, int h, const char* placeholder);
Fl_Choice* placeholder_choice(int x, int y, int w, int h, const char* placeholder);
Fl_Input_Choice* placeholder_input_choice(int x, int y, int w, int h, const char* placeholder);

// Variável global para armazenar todos os grupos
extern std::vector<Fl_Group*> groups;

#endif 
