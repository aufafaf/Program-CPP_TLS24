#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

float tambah(float a, float b){
        return a + b;
}
float kurang(float a, float b){
        return a - b;
}
float kali(float a, float b){
        return a * b;
}
float bagi(float a, float b){
        return a / b;
}

float masukkanAngka() {
    float num;
    while (true) {
        cin >> num;
        if (cin.fail()) { // Jika input tidak valid
            cin.clear(); // Membersihkan error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengabaikan input tidak valid
            cout << "Input tidak valid! Masukkan angka: ";
        } else {
            return num;
        }
    }
}

void tampilkanMenu() {
    cout << "\n==== KALKULATOR AUFA ====" << endl;
    cout << "1. Tambah" << endl;
    cout << "2. Kurang" << endl;
    cout << "3. Kali" << endl;
    cout << "4. Bagi" << endl;
    cout << "5. Keluar" << endl;
    cout << "===========================" << endl;
    cout << "Pilih operasi (1-5): ";
}
int main() {
    int pilihan, num1, num2;
    float hasil;
    string operasi;
    
    while (true) {
        tampilkanMenu();
        cin >> pilihan;

        // Validasi pilihan menu
        if (pilihan < 1 || pilihan > 5 || cin.fail()) {
            cin.clear(); // Membersihkan error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengabaikan input tidak valid
            cout << "Pilihan tidak valid! Silakan pilih lagi." << endl;
            continue;
        }

        if (pilihan == 5) {
            cout << "Terima kasih telah menggunakan kalkulator!" << endl;
            break;
        }

        // Memasukkan angka sesuai operasi
        if (pilihan == 1,2,3,4) {
            cout << "Masukkan angka pertama: ";
            num1 = masukkanAngka();
            cout << "Masukkan angka kedua: ";
            num2 = masukkanAngka();
                
            // Melakukan operasi sesuai pilihan
            switch (pilihan) {
                case 1:
                    cout << "Hasil: " << num1 << " + " << num2 << " = " << tambah(num1, num2) << endl;
                    continue;
                case 2:
                    cout << "Hasil: " << num1 << " - " << num2 << " = " << kurang(num1, num2) << endl;
                    continue;
                case 3:
                    cout << "Hasil: " << num1 << " * " << num2 << " = " << kali(num1, num2) << endl;
                    continue;
                case 4:
                    cout << "Hasil: " << num1 << " / " << num2 << " = " << bagi(num1, num2) << endl;
                    continue;
                default:
                    cout << "Operasi tidak valid!" << endl;
            }
        }
    }

    return 0;
        
}
