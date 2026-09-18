#include <iostream>
using namespace std;

int main(){
    system("cls");
    int kode, uang, harga = 0;
    string namaMinuman;
    
    cout << "VENDING MACHINE AUTOMAT" << endl;
    cout << "=======================" << endl;
    cout << "Pilihan Minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;
    cout << "=======================" << endl;
    
    cout << "Pilih kode minuman (1-3): ";
    cin >> kode;
    
    switch(kode){
        case 1:
            namaMinuman = "Air Mineral";
            harga = 4000;
            break;
        case 2:
            namaMinuman = "Teh Botol";
            harga = 6000;
            break;
        case 3:
            namaMinuman = "Kopi Susu";
            harga = 10000;
            break;
        default:
            cout << "Kode tidak valid." << endl;
            return 0;
    }
    
    cout << "Masukkan uang Anda (Rp): ";
    cin >> uang;
    
    cout << "\nDETAIL TRANSAKSI" << endl;
    cout << "=======================" << endl;
    cout << "Minuman: " << namaMinuman << endl;
    cout << "Harga: Rp " << harga << endl;
    cout << "Uang Anda: Rp " << uang << endl;
    cout << "=======================" << endl;
    
    if(uang < harga){
        int kekurangan = harga - uang;
        cout << "Transaksi Gagal! Uang Anda kurang Rp " << kekurangan << "." << endl;
    } else {
        int kembalian = uang - harga;
        cout << "Transaksi Berhasil!" << endl;
        cout << "Kembalian Anda: Rp " << kembalian << endl;
        
        if(kembalian > 0){
            cout << "\nPecahan Kembalian:" << endl;
            int lembar5000 = kembalian / 5000;
            int sisa = kembalian % 5000;
            int lembar1000 = sisa / 1000;
            
            cout << lembar5000 << " Lembar Rp 5.000" << endl;
            cout << lembar1000 << " Lembar Rp 1.000" << endl;
        }
    }
    
    return 0;
}
 