#include "base.h"

int main() {
  vector<map<string,string>>BD;

  string ca = "Add Fecha Evento";
  string ka = "add fecha evento";
    string ce = "Del Fecha Evento";
    string ke = "del fecha evento";
    string ci = "Del Fecha";
        string ki = "del fecha";
    string co = "Find Fecha";
    string ko = "find fecha";
    string cu = "Print";
        string ku = "print";
   string com;
   while(true) {
     
     cout<<"Ingrese un comando: ";
    getline(cin,com);
    if(com == ca || com == ka) {
        add(BD);
         }
        else if(com == ce || com == ke) {
       delet_fe_evento(BD);
            }
            else if(com == ci || com == ki) {
            cout<<"Ozy"<<endl;     }
                 else if(com == co || com == ko) {
                cout<<"Todavia"<<endl; }
                   else if(com == cu || com == ku) {
                       imprimir(BD);        }  
              else {
                  cout<<"Unknown command: "<<com<<endl;
                  
              }

}
    return 0;
}

