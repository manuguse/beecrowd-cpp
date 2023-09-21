#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double radius;
    double pi = 3.14159;
    cin >> setprecision(2) >> radius;
    double volume = (4.0/3)*pi*pow(radius, 3);
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    return 0;
}