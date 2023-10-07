#include <iostream>
using namespace std;

int main(){
    int linhas;
    cin >> linhas;
    for (int i = 0; i < linhas; i++){
        int tempo;
        cin >> tempo;

        if (tempo < 2015){
            cout << 2015 - tempo << " D.C." << endl;
        }
        else {
            cout << tempo - 2015 + 1 << " A.C." << endl;
        }
    }
    return 0;
}