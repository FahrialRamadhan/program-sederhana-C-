#include <iostream>
using namespace std;

int main(){
    char pengulangan;

    do{
        cout << "=====================SELAMAT DATANG DI PENGULANGAN====================" << endl;
        cout << "APAKAH ANDA INGIN MENGULANG PROGRAM INI (Y/N): ";
        cin >> pengulangan;
        cout << "=====================SELAMAT TINGGAL =====================" << endl;
    } while (pengulangan == 'Y');
}