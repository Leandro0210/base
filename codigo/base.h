#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
struct fechas {
    int fe;
    string nom;
};
void add(vector<map<string, string>>& BD);
void imprimir(vector<map<string, string>>& BD);
