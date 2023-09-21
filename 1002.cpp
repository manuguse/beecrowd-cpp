#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n = 3.14159;
    double radius;
    cin >> radius;
    double area = n * radius * radius;
    cout << fixed << setprecision(4) << "A=" << area << endl;
    return 0;
}