#include <iostream>
using namespace std;

bool valid(int a, int b, int c){
    return (a < b + c) && (b < a + c) && (c < a + b);
}

bool equilateral(int a, int b, int c){
    return (a == b) && (b == c);
}

bool isoseles(int a, int b, int c){
    return (a == b) || (b == c) || (c == a);
}

bool right(int a, int b, int c){
    return (a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b);
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(valid(a,b,c)){
        cout << "Valido-";

        if(equilateral(a,b,c)){
            cout << "Equilatero" << endl;
            cout << "Retangulo: N" << endl;
        }

        else if (isoseles(a,b,c)){
            cout << "Isoceles" << endl;
            cout << "Retangulo: N" << endl;
        }

        else {
            cout << "Escaleno" << endl;
            if (right(a,b,c)){
                cout << "Retangulo: S" << endl;
            }
            else {
                cout << "Retangulo: N" << endl;
            }
        }
    }

    else {
        cout << "Invalido" << endl;
    }
}