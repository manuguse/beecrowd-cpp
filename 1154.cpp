#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int soma_idade, nova_idade;
    float media, cont;
    while(true){
        cin >> nova_idade;
        if(nova_idade < 0){
            break;
        }
        soma_idade += nova_idade;
        cont += 1;
    }
    media = soma_idade/cont;
    cout << fixed << setprecision(2) << media << endl;
}