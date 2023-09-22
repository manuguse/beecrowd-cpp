#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    while(true){
        float nota, soma, media;
        int novo_calculo;

        soma = 0;
        for (int i=0; i < 2; i++){
            while(true) {
                cin >> nota;
                if(0 <= nota and nota <= 10) {
                    break;
                }
                cout << "nota invalida" << endl;
            }
            soma += nota;
        }
        media = soma/2;
        cout << "media = " << fixed << setprecision(2) << media << endl;
        while(true){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> novo_calculo;
            if(novo_calculo == 1 or novo_calculo == 2){
                break;
            }
        }
        if(novo_calculo == 2){
            break;
        }
    }
}