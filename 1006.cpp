#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double inputA, inputB, inputC;
    cin >> inputA;
    cin >> inputB;
    cin >> inputC;
    double media = (inputA*2 + inputB*3 + inputC*5)/10;

    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;
    return 0;
}