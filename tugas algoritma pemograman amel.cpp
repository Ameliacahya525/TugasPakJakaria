#include <iostream>
using namespace std;
int main(){
	const int jumlah_saleman = 10;
	double penjualan, total_komisi = 0;
	for (int i = 0; i < jumlah_saleman; i++){
		cout << "Masukkan penjualan saleman" << i+1 << ":";
		cin >> penjualan;
		double komisi = (penjualan <= 500000) ? penjualan * 0.10 : 500000*0.10 + (penjualan - 500000)* 0.15;
		total_komisi += komisi; 
		cout  << "Komisi salesman" << i+1 << ":Rp "<< komisi << endl;
	}
	cout << "Total komisi: Rp"<< total_komisi << endl;
	return 0;
}

