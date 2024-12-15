#include <iostream>
using namespace std;

int main() {
    awal:
    int pilihan;
    char ulang;
    cout << "1. Persegi Panjang\n2. Segi Tiga\n";
    cout << "Pilih :"; cin >> pilihan;

    switch (pilihan)
    {
    case 1:
    	float p,l,L;
          cout << "massukan panjang: ";
          cin >> p;
		  cout << "massukan lebar: ";
		  cin >> l;
		  L= p * l;
		  cout << "luas persegi panjang: " << L;
        break;
    
    case 2:
        float a, t, LS;
            cout << "massukan alas: ";
            cin >> a;
            cout << "massukan tinggi: ";
            cin >> t;
            LS = 0.5 * a * t;
            cout << "luas segitiga: " << LS;
        break;
    }
    cout << "\napakah mau mengulang: "; cin >> ulang;
    if(ulang == 'y' || ulang == 'Y') {
        goto awal;
    }
}