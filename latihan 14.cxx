#include <iostream>

using namespace std;

int main() {
    string kata1 = "satu";
    string kata2 = "lima";

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "Perulangan ke-" << i << "," << j << " (" << kata1 << "," << kata2 << ")" << endl;
        }
    }

    return 0;
}