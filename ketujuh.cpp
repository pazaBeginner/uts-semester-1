/*
Buatlah program C++ yang menggunakan perulangan for dengan statement continue untuk menampilkan
semua bilangan antara 1 hingga 100 yang bukan kelipatan 3 atau 5.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            continue;
        }

        cout << i << " ";
    }
}