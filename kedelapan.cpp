/*
Buatlah program C++ yang meminta pengguna memasukkan sebuah bilangan bulat n,
kemudian mencetak pola segitiga siku-siku dengan tinggi n menggunakan karakter *.
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    // int tinggi = n;

    cout << "Masukkan nilai N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*" << " ";
        }

        cout << endl;
    }

    return 0;
}