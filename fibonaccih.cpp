#include <iostream>
using namespace std;

int main(){

    int fn1 = 0;
    int fn2 = 1;
    int fn3;
    int f;

    cout << "=======Program Nilai Fibonacci=======" << endl;
    cout << "Masukan Nilai Variable F: ";
    cin >> f;
    cout << fn1 << ", " << fn2  << ", ";

    for (int i = 1; i < f; ++i){
       fn3 = fn1 + fn2;
       fn1 = fn2;
       fn2 = fn3;
       cout << fn3 << ", ";

    }
    
    
    
}