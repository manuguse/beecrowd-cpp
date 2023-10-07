#include <iostream>
using namespace std;

int verifica_paridade(int num){
    if (num%2 == 0){
        return 1;
    }
    return 0;
}

int verifica_positividade(int num){
    if (num > 0){
        return 1;
    }
    return 0;
}

int main(){
    int positivos = 0, negativos = 5, pares = 0, impares = 5, num;
    for(int i=0; i < 5; i++){
        cin >> num;
        positivos += verifica_positividade(num);
        pares += verifica_paridade(num);
        if(num == 0){
            negativos -= 1;
        }
    }

    negativos -= positivos;
    impares -= pares;

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

    return 0;
}