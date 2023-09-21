#include <iostream>
using namespace std;

int main() {
    int inputA, inputB, inputC, inputD;
    cin >> inputA;
    cin >> inputB;
    cin >> inputC;
    cin >> inputD;
    int diferenca = (inputA*inputB - inputC*inputD);
    cout << "DIFERENCA = " << diferenca << endl;
    return 0;
}