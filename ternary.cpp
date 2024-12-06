#include <iostream>
#include <string>
using namespace std;

int main() {
    int nilai;
    char ulang;

    do {
        system("cls");
        cout << "masukkan nilai: "; 
        cin >> nilai;

        string hasil = (nilai >= 86) ? "A" : (nilai >= 76) ? "B" : (nilai >= 56) ? "C" : (nilai >= 40) ? "D" : "E";

        cout << "nilai: " << hasil << endl;

        cout << "apakah mau mengulang (y/n)? "; 
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}