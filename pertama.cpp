// Buatlah program C++ yang meminta pengguna memasukkan nilai (0-100). Kemudian kategorikan nilai tersebut berdasarkan kriteria berikut:
/**
 90-100: "A”
 80-89: "B”
 70-79: "C”
 60-69: "D”
 <60: "E"
 */

#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 90 && nilai <= 100)
    {
        cout << "A" << endl;
    }
    else if (nilai >= 80 && nilai < 90)
    {
        cout << "B" << endl;
    }
    else if (nilai >= 70 && nilai < 80)
    {
        cout << "C" << endl;
    }
    else if (nilai >= 60 && nilai < 70)
    {
        cout << "D" << endl;
    }
    else if (nilai < 60)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "nilai tidak valid" << endl;
    }

    return 0;
}
