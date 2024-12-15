#include <iostream>
using namespace std;

int main(){
    awal:
    int ulang, a, h, pilihan;
    string nama;
    char mengulang;

    cout << "1. Program Perulangan Nama\n2. Program Perulangan Angka\n";
    cout << "Pilih Program: "; cin >> pilihan;

    switch (pilihan) {
        case 1:

        cout << "Program Perulangan Nama\n";
        cout << "Masukkan Nama: "; cin.ignore(); getline(cin, nama);

        cout  << "Masukkan Jumlah Perulangan: "; cin >> ulang;

        for(int a = 1; a <= ulang; a++){
        cout << a << " Nama Saya: " << nama << endl;
        }
        break;

    case 2:

        cout << "Program Perulangan Angka\n";
        cout << "Masukan nilai awal: "; cin >> a;
        cout << "Masukan nilai akhir: "; cin >> h;

        for(int c = a; c <= h; c++) {
            cout << c << ", "; 
        }
        break;
    } 
    cout << "\napakah mau mengulang: "; cin >> mengulang;
    if(mengulang == 'y' || mengulang == 'Y') {
        goto awal;
    }
}