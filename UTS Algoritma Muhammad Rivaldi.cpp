#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Masukkan bilangan ganjil: ";
    cin >> a;

    // Memeriksa apakah nilai ganjil atau genap
    if (a % 2 == 0) {
        cout << "Bilangan genap, menghitung nilai kedua." << endl;
        int b = 0;
        switch (a) {
            case 0: b = 1; break;
            case 2: b = 3; break;
            case 4: b = 5; break;
            case 6: b = 7; break;
            case 8: b = 9; break;
            default:
                b = 11;
                for (int i = 12; i <= a; i += 2) {
                    if (i % 2 == 0) {
                        b = i;
                        break;
                    }
                }
                break;
        }
        cout << "Nilai kedua untuk bilangan genap adalah: " << b << endl;
    } else {
        cout << "Bilangan ganjil, menghitung nilai pertama." << endl;
        int b = 0;
        switch (a) {
            case 1: b = 2; break;
            case 3: b = 4; break;
            case 5: b = 6; break;
            case 7: b = 8; break;
            case 9: b = 10; break;
            default:
                b = 11;
                for (int i = 12; i <= a; i += 2) {
                    if (i % 2 != 0) {
                        b = i;
                        break;
                        
                    }
                }
            }
        
		}
}
