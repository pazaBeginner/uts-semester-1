/*
Buatlah program C++ yang meminta pengguna memasukkan sebuah bilangan bulat n,
kemudian mencetak pola persegi dengan sisi n berisi angka yang berurutan.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int nilaiAwal = 1;

    cout << "masukkan nilai n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << left; // untuk mengatur rata kiri
            cout << setw(3) << nilaiAwal << " ";
            nilaiAwal++;
        }

        cout << endl;
    }

    return 0;
}