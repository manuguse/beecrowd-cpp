#include <iostream>
#include <map>
using namespace std;

int main() {
    int nota;
    cin >> nota;

    map<char, bool> opcoes = {
        {'E', (nota == 0)},
        {'D', (nota > 0 && nota <= 35)},
        {'C', (nota > 35 && nota <= 60)},
        {'B', (nota > 60 && nota <= 85)},
        {'A', (nota > 85 && nota <= 100)}
    };

    for (auto opcao : opcoes) {
        if (opcao.second) {
            cout << opcao.first << endl;
            break;
        }
    }

    return 0;
}
