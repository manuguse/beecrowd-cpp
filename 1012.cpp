#include <iostream>
#include <iomanip>
using namespace std;

double calcula_triangulo(double base, double altura){
    return (base*altura)/2;
}

double calcula_circulo(double raio){
    double pi = 3.14159;
    return (pi*raio*raio);
}

double calcula_trapezio(double base1, double base2, double altura){
    return (base1+base2)*altura/2;
}

double calcula_quadrado(double lado){
    return lado*lado;
}

double calcula_retangulo(double largura, double comprimento){
    return largura*comprimento;
}

double output(string figura, double valor){
    cout << fixed << setprecision(3) << figura << ": " << valor << endl;
    return 0;
}

int main(){
    double A, B, C;
    cin >> A >> B >> C;

    output("TRIANGULO", calcula_triangulo(A ,C));
    output("CIRCULO", calcula_circulo(C));
    output("TRAPEZIO", calcula_trapezio(A,B,C));
    output("QUADRADO", calcula_quadrado(B));
    output("RETANGULO", calcula_retangulo(A,B));

    return 0;
}

