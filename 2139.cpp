#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    vector<int> dias = {31, 29, 31, 30, 31, 30,
                        31, 31, 30, 31, 30, 31};

    while(true){
        int mes, dia;
        cin >> mes >> dia;
        if (cin.eof()) break;

        if(mes == 12 && dia == 25){
            cout << "E natal!" << endl;
        } else if(mes == 12 && dia == 24){
            cout << "E vespera de natal!" << endl;
        } else if(mes == 12 && dia > 25){
            cout << "Ja passou!" << endl;
        } else {
            int dias_restantes = 0;
            for (int i = mes; i < 12; i++){
                dias_restantes += dias[i];
            }
            dias_restantes += dias[mes - 1] - dia - 6;
            cout << "Faltam " << dias_restantes << " dias para o natal!" << endl;
        }
    }

    return 0;
}