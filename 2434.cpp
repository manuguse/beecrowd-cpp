#include <iostream>
using namespace std;

int main(){
    int dias, saldo, menor_saldo = 1000;
    cin >> dias >> saldo;
    for (int i = 0; i < dias; i++){
        int valor;
        cin >> valor;
        saldo += valor;
        if (saldo < menor_saldo){
            menor_saldo = saldo;
        }
    }

    cout << menor_saldo << endl;

    return 0;
}