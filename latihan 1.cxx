#include <iostream>
using namespace std;

int main() {
    int nilai1, nilai2, nilai3;
    double rataRata;

    cout << "Masukkan nilai pertama: ";
    cin >> nilai1;
    cout << "Masukkan nilai kedua: ";
    cin >> nilai2;
    cout << "Masukkan nilai ketiga: ";
    cin >> nilai3;

    rataRata = (nilai1 + nilai2 + nilai3) / 3.0;
    cout << "Rata-rata nilai adalah: " << rataRata << endl;

    return 0;
}