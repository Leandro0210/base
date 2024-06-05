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
    for (const auto& lp : BD) {
        for (const auto& kv : lp) {
    if(evento == lp) {
     cout<<"QUEVEDO"<<endl;   
        }
          }
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