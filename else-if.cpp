#include <iostream>
#include <string>
using namespace std;

int main() {
    a:
    int nilai;
    char ulang;
    system ("cls");
    cout << "Masukkan nilai: "; cin >> nilai;
    //goto a
    if(nilai >= 86) {
        cout << "A";
    }
    else if(nilai >= 76) {
        cout << "B";
    }
    else if(nilai >= 56) {
        cout << "C";
    }
    else if(nilai >= 40) {
        cout << "D";
    }
    else {
        cout << "E";
    }
    cout << "apakah mau mengulang: "; cin >> ulang;
    if(ulang == 'y' || ulang == 'Y') {
        goto a;
    }
}