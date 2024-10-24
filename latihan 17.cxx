#include <iostream>

using namespace std;

int main() {
    int jumlahToko;
    cout << "Masukkan jumlah toko: ";
    cin >> jumlahToko;

    int penjualan[jumlahToko];
    int totalPenjualan = 0;

    for (int i = 0; i < jumlahToko; i++) {
        cout << "Masukkan jumlah barang yang terjual di toko " << i+1 << ": ";
        cin >> penjualan[i];
        totalPenjualan += penjualan[i];
    }

    cout << "Total barang yang terjual di semua toko adalah: " << totalPenjualan << endl;

    return 0;
}}