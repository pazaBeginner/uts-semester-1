/*
Buatlah program C++ yang meminta pengguna memasukkan sebuah bilangan bulat n,
kemudian mencetak pola segitiga siku-siku dengan angka yang berurutan. 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    int nilai = 1;

    cout << "Masukkan nilai n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << left; 
            cout << setw(2) << nilai << " ";
            nilai++;
        }

        cout << endl;
    }

    return 0;
}
