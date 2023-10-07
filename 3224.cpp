#include <iostream>
#include <string>
using namespace std;

int main(){
    string pode, quer;
    cin >> pode >> quer;
    if (pode.length() < quer.length()){
        cout << "no" << endl;
    } else {
        cout << "go" << endl;
    }
    return 0;
}