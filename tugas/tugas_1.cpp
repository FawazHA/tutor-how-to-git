#include <iostream>
using namespace std;

int main(){
    int total;
    system("cls");
    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukkan total belanja (Rp): ", cin >> total;
    cout << endl << "--- Ringkasan Pembayaran ---" << endl;
    cout << "Total Belanja \t: Rp " << total << endl;
    if (total >= 100000 and total < 300000){
        cout << "Diskon \t\t: 10%" << endl;
        cout << "Total Bayar \t: Rp " << total - (total * 0.1) << endl;
    } else if (total >= 300000){
        cout << "Diskon \t\t: 20%" << endl;
        cout << "Total Bayar \t: Rp " << total - (total * 0.2) << endl;
    } else {
        cout << "Diskon \t\t: 0%" << endl;
        cout << "Total Bayar \t: Rp " << total << endl;
    }
}