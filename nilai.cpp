#include <iostream>
using namespace std;

int main() {
    string nama;
    int ind, eng, mtk;
    float rata;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Nilai B.Indonesia: "; cin >> ind;
    cout << "Nilai Matematika: "; cin >> mtk;
    cout << "Nilai B.Inggris: "; cin >> eng;

    rata = (ind + mtk + eng) / 3.0;

    if (ind > 65 && mtk > 65 && eng > 70 || rata >= 70) {
        cout << "\n" << nama << " - Lulus" << endl;
    } else {
        cout << "\n" << nama << " - Tidak Lulus" << endl;
    }

    cout << "Rata-rata nilai: " << rata << endl;

    return 0;
}
