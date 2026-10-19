/*
Buatlah program C++ yang meminta pengguna memasukkan nomor hari (1-7).
Program harus menampilkan nama hari sesuai dengan nomor yang dimasukkan (1 = Senin, 2 = Selasa, ..., 7 = Minggu). Jika input di luar rentang 1-7, tampilkan pesan error. 
Gunakan struktur switch-case.
*/ 

#include <iostream>

using namespace std;

int main() {
    int nomorHari;

    cout << "masukkan nomor hari (1-7): ";
    cin >> nomorHari;

    switch(nomorHari) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default:
            cout << "nomor hari tidak valid" << endl;
    }

    return 0;
}
