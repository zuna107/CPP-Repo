#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int pilihan, jumlah;
    string nama;
    float harga, total, diskon = 0, total_bayar;

    cout << "\nMama pelanggan: ";
    getline(cin, nama);

    system("cls");
    cout << "\nSelamat datang di warmindo, " << nama << endl;
    cout << "Menu Makanan:\n";
    cout << "1. Magelangan (25.000)\n";
    cout << "2. Mie Dokdok (30.000)\n";
    cout << "Pilih: "; cin >> pilihan;

    cout << "Jumlah: "; cin >> jumlah;

    if (pilihan == 1) {
        harga = 25000;
    } else if (pilihan == 2) {
        harga = 30000;
    } else {
        cout << "Pilihan tidak valid!\n";
        return 1; 
    }

    total = harga * jumlah;

    if (total >= 50000) {
        diskon = 0.1 * total; 
    } else if (total >= 30000) {
        diskon = 0.05 * total;
    }

    total_bayar = total - diskon;

    system("cls");
    cout << "\n=================================\n";
    cout << "            Nota Belanja         \n";
    cout << "Nama: " << nama << endl;
    cout << "=================================\n";
    cout << "           Daftar Belanja         \n";
    cout << left << setw(15) << "Nama Makanan" 
         << setw(10) << "Jumlah" 
         << setw(10) << "Diskon" 
         << setw(10) << "Total\n";
    cout << left << setw(11) << (pilihan == 1 ? "Magelangan" : "Mie Dokdok")
         << setw(10) << jumlah 
         << setw(10) << diskon 
         << setw(10) << total_bayar << endl;
    cout << "=================================\n";

    return 0;
}
