#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string npm;
    string nama;
    double nilaiMid;
    double nilaiSemester;
    double nilaiAkhir;
    char nilaiHuruf;
};

void hitungNilaiAkhir(Mahasiswa &mhs) {
    mhs.nilaiAkhir = 0.4 * mhs.nilaiMid + 0.6 * mhs.nilaiSemester;

    if (mhs.nilaiAkhir >= 80) {
        mhs.nilaiHuruf = 'A';
    } else if (mhs.nilaiAkhir >= 70) {
        mhs.nilaiHuruf = 'B';
    } else if (mhs.nilaiAkhir >= 55) {
        mhs.nilaiHuruf = 'C';
    } else if (mhs.nilaiAkhir >= 40) {
        mhs.nilaiHuruf = 'D';
    } else {
        mhs.nilaiHuruf = 'E';
    }
}

int main() {
    const int MAX_MAHASISWA = 100;
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nData Mahasiswa ke-" << i+1 << endl;
        cout << "NPM: ";
        cin >> mahasiswa[i].npm;
        cout << "Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "Nilai Mid: ";
        cin >> mahasiswa[i].nilaiMid;
        cout << "Nilai Semester: ";
        cin >> mahasiswa[i].nilaiSemester;

        hitungNilaiAkhir(mahasiswa[i]);
    }

    cout << "\nData Nilai Akhir Mahasiswa" << endl;
    cout << "----------------------------------------" << endl;
    cout << "NPM\tNama\tNilai Akhir\tNilai Huruf" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << mahasiswa[i].npm << "\t" << mahasiswa[i].nama << "\t"
             << mahasiswa[i].nilaiAkhir << "\t\t" << mahasiswa[i].nilaiHuruf << endl;
    }

    return 0;
}