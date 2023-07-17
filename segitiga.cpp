#include <iostream>
using namespace std;

int main(){
    int f;

    cout << "Masukan Input Nilai: ";
    cin >> f;

    for (int i = 1; i <= f; i++){
        for (int j = 1; j < i; j++){
             cout << "*";
        }
        
        cout << endl;
    }
}