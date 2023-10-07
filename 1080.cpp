#include <iostream>
using namespace std;

int main(){
    int maior_num, maior_posicao, num;
    for (int i = 1; i <= 100; i++){
        cin >> num;
        if (num > maior_num) {
            maior_num = num;
            maior_posicao = i;
        }
    }
    cout << maior_num << endl << maior_posicao << endl;
    return 0;
}