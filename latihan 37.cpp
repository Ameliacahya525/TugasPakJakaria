#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ofstream file("data.txt");
	
	if (file.is_open()) {
		file << "STMIK Penusa\n";
		file << "Belajar Algoritma Pemograman.";
		file.close();
	} else {
		cout << "File tidak bisa dibuka";
	}
	return 0;
}
