#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    int casos, total;
    char tipo;

    cin >> casos;

    map<char, int> animais = {
        {'C', 0},
        {'R', 0},
        {'S', 0}
    };

    for (int i = 0; i < casos; i++){
        int num_tipo;
        cin >> num_tipo >> tipo;
        animais[tipo] += num_tipo;
        total += num_tipo;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << animais['C'] << endl;
    cout << "Total de ratos: " << animais['R'] << endl;
    cout << "Total de sapos: " << animais['S'] << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << (float)animais['C'] / total * 100 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << (float)animais['R'] / total * 100 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << (float)animais['S'] / total * 100 << " %" << endl;

    return 0;
}