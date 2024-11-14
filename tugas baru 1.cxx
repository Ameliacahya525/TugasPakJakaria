#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

struct Pegawai {
    string nama;
    string golongan;
    string jabatan;
    double pinjaman;
};

double getGajiPokok(const string &golongan) {
    map<string, double> gajiPerGolongan = {
        {"Ia", 500000}, {"Ib", 750000}, {"IIa", 1000000},
        {"IIb", 1500000}, {"IIIa", 1750000}, {"IIIb", 2500000}
    };
    return gajiPerGolongan[golongan];
}

double getTunjangan(const string &jabatan) {
    map<string, double> tunjanganPerJabatan = {
        {"Dir", 450000}, {"Sek", 300000}, {"Wak", 375000}, {"Stf", 200000}
    };
    return tunjanganPerJabatan[jabatan];
}

double hitungPajak(double gajiKotor) {
    return gajiKotor * 0.05;
}

double hitungGajiBersih(double gajiKotor, double pajak, double pinjaman) {
    return gajiKotor - pajak - pinjaman;
}

void tampilkanSlipGaji(const Pegawai &pegawai) {
    double gajiPokok = getGajiPokok(pegawai.golongan);
    double tunjangan = getTunjangan(pegawai.jabatan);
    double gajiKotor = gajiPokok + tunjangan;
    double pajak = hitungPajak(gajiKotor);
    double gajiBersih = hitungGajiBersih(gajiKotor, pajak, pegawai.pinjaman);

    cout << "\n==== Slip Gaji Pegawai ====" << endl;
    cout << "Nama Pegawai   : " << pegawai.nama << endl;
    cout << "Golongan       : " << pegawai.golongan << endl;
    cout << "Jabatan        : " << pegawai.jabatan << endl;
    cout << "Gaji Pokok     : Rp " << fixed << setprecision(2) << gajiPokok << endl;
    cout << "Tunjangan      : Rp " << tunjangan << endl;
    cout << "Pinjaman       : Rp " << pegawai.pinjaman << endl;
    cout << "Pajak          : Rp " << pajak << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Gaji Kotor : Rp " << gajiKotor << endl;
    cout << "Total Gaji Bersih: Rp " << gajiBersih << endl;
}

int main() {
    char lanjut;
    do {
        Pegawai pegawai;

        cout << "Masukkan Nama Pegawai: ";
        cin.ignore();
        getline(cin, pegawai.nama);

        cout << "Masukkan Golongan (Ia, Ib, IIa, IIb, IIIa, IIIb): ";
        cin >> pegawai.golongan;

        cout << "Masukkan Kode Jabatan (Dir, Sek, Wak, Stf): ";
        cin >> pegawai.jabatan;

        cout << "Masukkan Jumlah Pinjaman: ";
        cin >> pegawai.pinjaman;

        tampilkanSlipGaji(pegawai);

        cout << "\nApakah ingin menghitung gaji lagi? [Y/T]: ";
        cin >> lanjut;

    } while (lanjut == 'Y' || lanjut == 'y');

    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}