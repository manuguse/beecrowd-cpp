#include <iostream>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        if (y == 0){
            cout << "divisao impossivel" << endl;
        }
        else {
            cout << fixed <<
            printf("%.1f\n", (float)x/y);
        }
    }
    return 0;
}