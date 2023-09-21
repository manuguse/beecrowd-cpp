#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double salary, amount;
    cin >> name;
    cin >> salary;
    cin >> amount;

    double total_salary = salary + 0.15*amount;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total_salary << endl;
    return 0;
}