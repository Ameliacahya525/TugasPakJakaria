#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama, golongan, kodeJabatan;
    int gajiPokok, tunjangan, pinjaman, pajak, totalGajiKotor, totalGajiBersih;
    
    cout << "Nama Pegawai: ";
    getline(cin, nama);
    cout << "Golongan (Ia/Ib/IIa/IIb/IIIa/IIIb): ";
    cin >> golongan;
    cout << "Kode Jabatan (Dir/Sek/Wak/Stf): ";
    cin >> kodeJabatan;
    cout << "Pinjaman: Rp ";
    cin >> pinjaman;

    if (golongan == "Ia") {
        gajiPokok = 500000;
    } else if (golongan == "Ib") {
        gajiPokok = 750000;
    } else if (golongan == "IIa") {
        gajiPokok = 1000000;
    } else if (golongan == "IIb") {
        gajiPokok = 1500000;
    } else if (golongan == "IIIa") {
        gajiPokok = 1750000;
    } else if (golongan == "IIIb") {
        gajiPokok = 2500000;
    } else {
        cout << "Golongan tidak valid!" << endl;
        return 1;
    }

    if (kodeJabatan == "Dir") {
        tunjangan = 450000;
    } else if (kodeJabatan == "Sek") {
        tunjangan = 300000;
    } else if (kodeJabatan == "Wak") {
        tunjangan = 375000;
    } else if (kodeJabatan == "Stf") {
        tunjangan = 200000;
    } else {
        cout << "Kode Jabatan tidak valid!" << endl;
        return 1;
    }

    totalGajiKotor = gajiPokok + tunjangan;
    pajak = totalGajiKotor * 0.05;
    totalGajiBersih = totalGajiKotor - pinjaman - pajak;


    cout << "\n========================================\n";
    cout << "         GAJI PEGAWAI PT. TELKOM        \n";
    cout << "========================================\n";
    cout << "Nama Pegawai      : " << nama << endl;
    cout << "Golongan          : " << golongan << endl;
    cout << "Kode Jabatan      : " << kodeJabatan << endl;
    cout << "Gaji              : Rp. " << gajiPokok << endl;
    cout << "Tunjangan         : Rp. " << tunjangan << endl;
    cout << "Pinjaman          : Rp. " << pinjaman << endl;
    cout << "Pajak             : Rp. " << pajak << endl;
    cout << "Total Gaji Kotor  : Rp. " << totalGajiKotor << endl;
    cout << "Total Gaji Bersih : Rp. " << totalGajiBersih << endl;
    cout << "========================================\n";

    return 0;
}