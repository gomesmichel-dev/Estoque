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

