#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double inputA, inputB;
    cin >> inputA;
    cin >> inputB;
    double media = (inputA*3.5 + inputB*7.5)/11;
    
    cout << fixed << setprecision(5) << "MEDIA = " << media << endl;
    return 0;
}