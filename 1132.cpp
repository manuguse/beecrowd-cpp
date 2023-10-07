#include <iostream>
using namespace std;

int max(int a, int b){
    return (a+b+abs(a-b))/2;
}

int min(int a, int b){
    return (a+b-abs(a-b))/2;
}

int divisible(int a){
    if (a % 13 == 0){
        return 0;
    } 
    return a;
}

int main(){
    int inputA, inputB, sum = 0;
    cin >> inputA >> inputB;

    for(int i = min(inputA, inputB); i < max(inputA, inputB); i++){
        sum += divisible(i);
    }

    cout << sum << endl;

    return 0;
}