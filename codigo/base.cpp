#include "base.h"

void add(vector<map<string,string>>& BD) {
    fechas aho, mes, dia;
    fechas eve;
    string h, m, d;
    cout<<"Introduce Año-Mes-Día: "<<endl;
    cin>>aho.fe>>mes.fe>>dia.fe;
    
    if(aho.fe < 10) {
        h = to_string(aho.fe);
       h = "000" + h;
    } else if (aho.fe < 100 ) {
        h = to_string(aho.fe);
       h = "00" + h;  
    }   else if (aho.fe < 1000) {
        h = to_string(aho.fe);
        h = "0" + h; 
    } else {
       h = to_string(aho.fe);
    } 
    if(mes.fe>12) {
        cout<<"Month value is invalid: "<<mes.fe<<endl;
        exit(1);
    }  else if(mes.fe < 10) {
        m = to_string(mes.fe);
        m = "0" + m;
    } else {
        m = to_string(mes.fe);
    }
    if (dia.fe > 31) {
        cout<<"Day value is invalid: "<<dia.fe<<endl;
    exit(1);
    } else if (dia.fe < 10) {
        d = to_string(dia.fe);
        d = "0" + d;
    } else {
        d = to_string(dia.fe);
    }
    
        cin.ignore();
        
    cout<<"Introduce el evento: ";
    getline(cin,eve.nom);
    string p;
    p = h + "-" + m +"-"+ d;
     map<string, string> evento;
    evento[p] = eve.nom;
    BD.push_back(evento); 

}
void delet_fe_evento(vector<map<string, string>>& BD) {

    fechas aho, mes, dia;
    fechas eve;
    string h, m, d;
    cout<<"Introduce Año-Mes-Día: "<<endl;
    cin>>aho.fe>>mes.fe>>dia.fe;
    
    if(aho.fe < 10) {
        h = to_string(aho.fe);
       h = "000" + h;
    } else if (aho.fe < 100 ) {
        h = to_string(aho.fe);
       h = "00" + h;  
    }   else if (aho.fe < 1000) {
        h = to_string(aho.fe);
        h = "0" + h; 
    } else {
       h = to_string(aho.fe);
    } 
    if(mes.fe>12) {
        cout<<"Month value is invalid: "<<mes.fe<<endl;
        exit(1);
    }  else if(mes.fe < 10) {
        m = to_string(mes.fe);
        m = "0" + m;
    } else {
        m = to_string(mes.fe);
    }
    if (dia.fe > 31) {
        cout<<"Day value is invalid: "<<dia.fe<<endl;
    exit(1);
    } else if (dia.fe < 10) {
        d = to_string(dia.fe);
        d = "0" + d;
    } else {
        d = to_string(dia.fe);
    }
    
        cin.ignore();
        
    cout<<"Introduce el evento: ";
    getline(cin,eve.nom);
    string p;
    p = h + "-" + m +"-"+ d;
    map<string, string> evento;
    evento[p] = eve.nom;
    for (auto& lp : BD) {
        for (auto kv : lp) {
            map<string, string> descarga;
            descarga[kv.first] = kv.second;

            if (evento == descarga) {
                lp.clear();
                cout << "Deleted successfully" << endl;
                break;
            }
        }
    }

    if (BD.empty()) {
        cout << "Event not found" << endl;
    }

    
}
void imprimir(vector<map<string, string>>& BD) {
    map<string, string> todos_eventos;
    for (const auto& lp : BD) {
        for (const auto& kv : lp) {
            todos_eventos[kv.first] = kv.second;
        }
    }
    for(const auto& ash : todos_eventos) {
        cout<<ash.first<<": "<<ash.second<<endl;
    }
    
}
void delet_fecha(vector<map<string, string>>& BD) {
    int contador = 0;
    fechas aho, mes, dia;
    string h, m, d;

    cout << "Introduce Año-Mes-Día: " << endl;
    cin >> aho.fe >> mes.fe >> dia.fe;

    if (aho.fe < 10) {
        h = "000" + to_string(aho.fe);
    } else if (aho.fe < 100) {
        h = "00" + to_string(aho.fe);
    } else if (aho.fe < 1000) {
        h = "0" + to_string(aho.fe);
    } else {
        h = to_string(aho.fe);
    }

    if (mes.fe > 12) {
        cout << "Month value is invalid: " << mes.fe << endl;
        exit(1);
    } else if (mes.fe < 10) {
        m = "0" + to_string(mes.fe);
    } else {
        m = to_string(mes.fe);
    }

    if (dia.fe > 31) {
        cout << "Day value is invalid: " << dia.fe << endl;
        exit(1);
    } else if (dia.fe < 10) {
        d = "0" + to_string(dia.fe);
    } else {
        d = to_string(dia.fe);
    }

    cin.ignore();
    string p = h + "-" + m + "-" + d;

    for (auto& lp : BD) {
        // Creamos una lista temporal para almacenar las claves a eliminar
        vector<string> keys_to_remove;
        
        // Iteramos por todas las entradas en el mapa lp
        for (auto& kv : lp) {
            if (kv.first == p) {
                keys_to_remove.push_back(kv.first); // Añadir la clave a la lista de claves a eliminar
                contador++;
            }
        }
        
        // Eliminamos las entradas especificadas en keys_to_remove
        for (const auto& key : keys_to_remove) {
            lp.erase(key);
        }
    }
        cout << "Deleted " << contador << " events" << endl;
    
}

void find(vector<map<string, string>>& BD) {
    fechas aho, mes, dia;
    fechas eve;
    string h, m, d;
    cout<<"Introduce Año-Mes-Día: "<<endl;
    cin>>aho.fe>>mes.fe>>dia.fe;
    
    if(aho.fe < 10) {
        h = to_string(aho.fe);
       h = "000" + h;
    } else if (aho.fe < 100 ) {
        h = to_string(aho.fe);
       h = "00" + h;  
    }   else if (aho.fe < 1000) {
        h = to_string(aho.fe);
        h = "0" + h; 
    } else {
       h = to_string(aho.fe);
    } 
    if(mes.fe>12) {
        cout<<"Month value is invalid: "<<mes.fe<<endl;
        exit(1);
    }  else if(mes.fe < 10) {
        m = to_string(mes.fe);
        m = "0" + m;
    } else {
        m = to_string(mes.fe);
    }
    if (dia.fe > 31) {
        cout<<"Day value is invalid: "<<dia.fe<<endl;
    exit(1);
    } else if (dia.fe < 10) {
        d = to_string(dia.fe);
        d = "0" + d;
    } else {
        d = to_string(dia.fe);
    }
     string p;
    p = h + "-" + m +"-"+ d;
    
        cin.ignore();
        
        vector<string>v;
    for(auto& lp : BD) {
        for(auto& kv : lp) {
            if(p == kv.first) {
             v.push_back(kv.second); 
               }
            } 
        }
        int n = v.size();
    for (int i = 0; i < n; ++i) {
        int menor = i;
        for (int j = i + 1; j < n; ++j) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        // Intercambio manual de elementos
        string temp = v[menor];
        v[i] = v[menor];
        v[menor] = temp;
    }

    // Imprimir el vector ordenado
    cout <<"Eventos en esta fecha:" << endl;
    for (const auto& palabra : v) {
        cout << palabra << endl;
    }
}