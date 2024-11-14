#ifndef CONFIG_H
#define CONFIG_H

#include <FL/Fl_Input.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input_Choice.H>


Fl_Input* placeholder_input(int x, int y, int w, int h, const char* placeholder);
Fl_Choice* placeholder_choice(int x, int y, int w, int h, const char* placeholder);
Fl_Input_Choice* placeholder_input_choice(int x, int y, int w, int h, const char* placeholder);

#endif 
