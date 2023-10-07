#include <iostream>
using namespace std;

int main(){
    int tea_type, correct_count = 0;
    int guesses[5];

    cin >> tea_type;
    for (int i = 0; i < 5; i++){
        cin >> guesses[i];
        if (guesses[i] == tea_type){
            correct_count++;
        }
    }
    
    cout << correct_count << endl;
    return 0;
}