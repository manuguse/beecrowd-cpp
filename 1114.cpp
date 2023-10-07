#include <iostream>
using namespace std;

int main(){
    int senha = 2002, tentativa;
    while(true){
        cin >> tentativa;
        if(tentativa == senha){
            break;
        }
        cout << "Senha Invalida" << endl;
    }
    cout << "Acesso Permitido" << endl;
}