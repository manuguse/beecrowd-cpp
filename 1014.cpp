#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int distance;
    double gas;

    cin >> distance;
    cin >> gas;

    double km_l = distance/gas;
    
    cout << fixed << setprecision(3) << km_l << " km/l" << endl;
    return 0;
}
