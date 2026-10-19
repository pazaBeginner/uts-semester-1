/*
Buatlah program C++ yang menggunakan perulangan while untuk menghitung faktorial dari sebuah bilangan yang diinputkan oleh pengguna.
Program harus memvalidasi input agar hanya menerima bilangan non-negatif.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int angka;
    long hasil = 1;

    cout << "Masukkan bilangan non-negatif: ";
    cin >> n;

    angka = n;

    if (n >= 0) {
        while(n > 0) {
            hasil *= n; // hasil = hasil * n
            n--;
        }
        cout << "Faktorial dari " << angka << " adalah " << hasil << endl;
    } else {
        cout << "Error: Input harus non-negatif" << endl;
    }
    
    return 0;

}