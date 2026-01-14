#include <iostream>
using namespace std;

int main() {
    int jumlahMahasiswa;
    char nilai;

    // Variabel untuk menyimpan jumlah vote tiap nilai
    int A = 0, B = 0, C = 0, D = 0, E = 0;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    for (int i = 1; i <= jumlahMahasiswa; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << i << " (A/B/C/D/E): ";
        cin >> nilai;

        switch (nilai) {
            case 'A':
            case 'a':
                A++;
                break;
            case 'B':
            case 'b':
                B++;
                break;
            case 'C':
            case 'c':
                C++;
                break;
            case 'D':
            case 'd':
                D++;
                break;
            case 'E':
            case 'e':
                E++;
                break;
            default:
                cout << "Nilai tidak valid!" << endl;
                i--; // mengulang input jika salah
        }
    }

    cout << "\n=== Hasil Penilaian Mahasiswa ===" << endl;
    cout << "Nilai A: " << A << " mahasiswa" << endl;
    cout << "Nilai B: " << B << " mahasiswa" << endl;
    cout << "Nilai C: " << C << " mahasiswa" << endl;
    cout << "Nilai D: " << D << " mahasiswa" << endl;
    cout << "Nilai E: " << E << " mahasiswa" << endl;

    return 0;
}
