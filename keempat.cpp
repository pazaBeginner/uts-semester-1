/*
Buatlah program C++ yang meminta pengguna memasukkan sebuah huruf.
Program harus menentukan apakah huruf tersebut adalah vokal (a, i, u, e, o) atau konsonan.
Gunakan struktur switch-case dan gunakan Fall-Through disengaja.
Abaikan case sensitivity (anggap input selalu huruf kecil).
*/

#include <iostream>

using namespace std;

int main()
{
    char huruf;

    cout << "Masukkan sebuah huruf: ";
    cin >> huruf;

    switch (huruf)
    {
    case 'a':
    case 'i':
    case 'u':
    case 'e':
    case 'o':
        cout << "Vokal" << endl;
        break;
    default:
        cout << "Konsonan" << endl;
    }
}