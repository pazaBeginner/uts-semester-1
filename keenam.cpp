/*
Buatlah program C++ yang menggunakan perulangan do-while untuk menampilkan deret bilangan ganjil antara 1 hingga N,
dimana N diinputkan oleh pengguna.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int angka = 1;

    cout << "Masukkan nilai N: ";
    cin >> n;

    cout << "Deret Bilangan ganjil: ";

    do
    {
        if (angka % 2 == 1)
        {
            cout << angka << " ";
        }
        angka++;
    } while (angka <= n && angka > 0);

    return 0;
}
