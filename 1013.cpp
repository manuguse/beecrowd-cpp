#include <iostream>
#include <iomanip>

using namespace std;

int maiorXY(int x, int y) {
    int maiorXY = (x+y + abs(x-y))/2;
    return maiorXY;
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int primeiro_maior = maiorXY(A,B);
    int maior = maiorXY(primeiro_maior, C);

    cout << maior << " eh o maior" << endl;

    return 0;
}
