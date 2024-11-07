#ifndef DATABASE_h
#define DATABASE_h

#include <sqlite3.h>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input.H>

//conectar o banco de dados

bool conectarBanco(sqlite3** db){
   int exit = sqlite3_open("../db/estoque.db")
}