/*
Buatlah program C++ yang menghitung diskon berdasarkan total belanja:
- Total > 500000: diskon 25%
- Total 300000-500000: diskon 15%
- Total 100000-299999: diskon 10%
- Total <100000: tidak ada diskon
Tampilkan jumlah diskon dan total harga setelah diskon.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int total;
    int diskon;

    cout << "Masukkan total belanja: ";
    cin >> total;

    if (total > 500000)
    {
        diskon = total * 0.25;
        cout << "Diskon: " << diskon << endl;
        cout << "Total bayar: " << total - diskon << endl;
    }
    else if (total >= 300000 && total <= 500000)
    {
        diskon = total * 0.15;
        cout << "Diskon: " << diskon << endl;
        cout << "Total bayar: " << total - diskon << endl;
    }
    else if (total >= 100000 && total <= 299999)
    {
        diskon = total * 0.10;
        cout << "Diskon: " << diskon << endl;
        cout << "Total bayar: " << total - diskon << endl;
    }
    else
    {
        diskon = 0;
        cout << "Diskon: " << diskon << endl;
        cout << "Total bayar: " << total - diskon << endl;
    }

    return 0;
}