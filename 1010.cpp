#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int code1, num1, code2, num2;
    double value1, value2;

    cin >> code1 >> num1 >> setprecision(2) >> value1;
    cin >> code2 >> num2 >> setprecision(2) >> value2;

    double total_value = (num1*value1 + num2*value2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total_value << endl;
}