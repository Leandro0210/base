#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>
using namespace std;
struct fechas {
    int fe;
    string nom;
};
void add(vector<map<string, string>>& BD);
void imprimir(vector<map<string, string>>& BD);
void delet_fe_evento(vector<map<string, string>>& BD);
void delet_fecha(vector<map<string, string>>& BD);
void find(vector<map<string, string>>& BD);