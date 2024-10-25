#include <iostream>
#include <iomanip> // for setw, fixed, setprecision

using namespace std;

void drawBox(int width, string title) {
    cout << "+";
    for (int i = 0; i < width; i++) cout << "-";
    cout << "+" << endl;

    cout << "| " << title;
    for (int i = title.length(); i < width - 1; i++) cout << " ";
    cout << "|" << endl;

    cout << "+";
    for (int i = 0; i < width; i++) cout << "-";
    cout << "+" << endl;
}

int main() {
    string name, npm, jurusan;
    int kode, cicilanKe;
    double pembayaranAwal, besarCicilan, jumlahCicilan, totalUangKuliah, uangKuliahTerbayar, sisaUangKuliah;

    cout << "Kode Jurusan:" << endl;
    cout << "1. Sistem Informasi (2100000, 7 cicilan, 300000)" << endl;
    cout << "2. Teknik Informatika (2500000, 7 cicilan, 300000)" << endl;
    cout << "3. Komputer Akuntansi (1750000, 6 cicilan, 200000)" << endl;
    cout << "4. Manajemen Informatika (1500000, 6 cicilan, 250000)" << endl;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, name);
    cout << "Masukkan NPM: ";
    getline(cin, npm);
    cout << "Masukkan Kode Jurusan (1-4): ";
    cin >> kode;
    cout << "Masukkan Pembayaran Cicilan Ke: ";
    cin >> cicilanKe;

    switch (kode) {
        case 1:
            jurusan = "Sistem Informasi";
            pembayaranAwal = 2100000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
            break;
        case 2:
            jurusan = "Teknik Informatika";
            pembayaranAwal = 2500000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
            break;
        case 3:
            jurusan = "Komputer Akuntansi";
            pembayaranAwal = 1750000;
            jumlahCicilan = 6;
            besarCicilan = 200000;
            break;
        case 4:
            jurusan = "Manajemen Informatika";
            pembayaranAwal = 1500000;
            jumlahCicilan = 6;
            besarCicilan = 250000;
            break;
        default:
            cout << "Kode Jurusan tidak valid!" << endl;
            return 1;
    }

    totalUangKuliah = pembayaranAwal + (jumlahCicilan * besarCicilan);
    uangKuliahTerbayar = pembayaranAwal + (cicilanKe * besarCicilan);
    sisaUangKuliah = totalUangKuliah - uangKuliahTerbayar;

    drawBox(40, "PEMBAYARAN UANG KULIAH");

    cout << fixed << setprecision(0); 
    cout << "| Nama Mahasiswa: " << setw(23) << left << name << " |" << endl;
    cout << "| NPM           : " << setw(23) << left << npm << " |" << endl;
    cout << "| Jurusan       : " << setw(23) << left << jurusan << " |" << endl;
    cout << "| Pembayaran Awal: Rp " << setw(17) << left << pembayaranAwal << " |" << endl;
    cout << "| Jumlah Cicilan: " << setw(22) << left << jumlahCicilan << " |" << endl;
    cout << "| Besar Cicilan : Rp " << setw(17) << left << besarCicilan << " |" << endl;
    cout << "| Pembayaran Ke : " << setw(23) << left << cicilanKe << " |" << endl;
    cout << "| Uang Kuliah Terbayar: Rp " << setw(13) << left << uangKuliahTerbayar << " |" << endl;
    cout << "| Sisa Uang Kuliah   : Rp " << setw(13) << left << sisaUangKuliah << " |" << endl;

    cout << "+----------------------------------------+" << endl;

    return 0;
}


