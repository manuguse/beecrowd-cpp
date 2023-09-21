#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int worker_num, hours;
    double hourly_value;

    cin >> worker_num;
    cin >> hours;
    cin >> hourly_value;

    double salary = hours*hourly_value;

    cout << "NUMBER = " << worker_num << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}