#include <iostream>
using namespace std;

int main(){
    int n, t, v;
    int soma = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t >> v;
        soma += t*v;
    }
    cout << soma << endl;
    return 0;
}
