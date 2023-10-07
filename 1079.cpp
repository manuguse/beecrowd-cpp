#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, nota1, nota2, nota3;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> nota1 >> nota2 >> nota3;
        cout << fixed << setprecision(1) << (nota1*2.0 + nota2*3.0 + nota3*5.0)/10.0 << endl;
    }

    return 0;
}