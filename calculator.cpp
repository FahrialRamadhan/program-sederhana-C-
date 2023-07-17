#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    char aritmatika;
    char key;
do
{
    cout << "=====================SELAMAT DATANG DICALCULATOR SEDERHANA==================\n\n";
    cout << "Masukkan Angka Nilai : ";
    cin >> a;
    cout << "Masukkan Operator : ";
    cin >> aritmatika;
    cout << "Masukkan Angka Nilai : ";
    cin >> b;


    switch(aritmatika){
        case '+':
            c = a+b;
            break;
        case '-':
            c = a-b;
            break;
        case '*':
            c = a*b;
            break;
        case '/':
            c = a/b;
            break;
        default:
            cout << "Masukkan Operator yang Benar : " << endl;
            break;
    }
    cout << "Hasil dari Operasi : " << a << aritmatika << b << " : " << c << endl;
    cout << '\n';

    cout << "APAKAH ANDA INGIN MENGULANG PROGRAM INI (Y/N): ";
    cin >> key;

    
    cin.get();
    cout << "=====================TERIMAKASIH SUDAH MEMAKAI PROGRAM INI==================\n\n";

    
}while ( key == 'Y', key = 'y');
    return 0;
}