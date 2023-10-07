#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    int total_amount, code, amount;
    float total_price = 0.0;

    map<int,float> prices = {
        {1001, 1.50},
        {1002, 2.50},
        {1003, 3.50},
        {1004, 4.50},
        {1005, 5.50}
    };

    cin >> total_amount;

    for (int i = 0; i < total_amount; i++){
        cin >> code >> amount;
        total_price += prices[code] * amount;
    }

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}