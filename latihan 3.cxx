#include <iostream>
using namespace std;

int main() {
    double pa, ts, luas;

    cout << "Masukkan panjang alas (pa): ";
    cin >> pa;
    cout << "Masukkan tinggi segitiga (ts): ";
    cin >> ts;

    luas = 0.5 * pa * ts;
    cout << "Luas segitiga sama kaki adalah: " << luas << endl;

    return 0;
}