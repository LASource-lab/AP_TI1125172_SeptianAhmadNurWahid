#include<iostream>
#include<string>
using namespace std;

// Daftar Barang
// Prosedur tanpa parameter
void tampilkanDaftarbarang(){
    cout << "         PROGRAM KASIR SEDERHANA         " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "|     Daftar Barang     |     Harga     |" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "| 1. Sarden Kaleng Kecil| Rp.8000       |" << endl;
    cout << "| 2. Sarden Kaleng Besar| Rp.22000      |" << endl;
    cout << "| 3. Sabun Mandi Batang | Rp.8000       |" << endl;
    cout << "| 4. Sabun Mandi Cair   | Rp.15000      |" << endl;
    cout << "| 5. Minyak Goreng      | Rp.12000      |" << endl;
    cout << "| 6. Mie Instan         | Rp.3500       |" << endl;
    cout << "| 7. Kopi               | Rp.10000      |" << endl;
    cout << "| 8. Pasta Gigi         | Rp.10000      |" << endl;
    cout << "-----------------------------------------" << endl;
}

//Hitung Total Pembayaran
//Fungsi dengan parameter dan nilai kembali
int hitungTotal(int harga, int jumlah){
    return harga * jumlah;
}

// Hitung Pajak
// Fungsi dengan parameter dan nilai kembali
double hitungPajak(int total){
    return total * 0.11; 
}

// Cetak Struk Pembelian
// Prosedur dengan parameter
void cetakStrukPembelian(string namaBarang, int jumlah, int harga, int diskon, int total, double pajak, double bayar){
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "\n===========STRUK PEMBELIAN=============" << endl;
    cout << "Nama Barang: " << namaBarang << endl;
    cout << "Jumlah: " << jumlah << endl;
    cout << "Harga per Satuan: Rp." << harga << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Total bayar: Rp." << total << endl;
    cout << "Diskon: Rp." << diskon << endl;
    cout << "Pajak: Rp." << pajak << endl;
    cout << "Total Pembayaran: Rp." << bayar << endl;
    cout << "=========================================" << endl;
}

int main(){
    int pilihan, jumlah;
    char ulang;

    do{
        tampilkanDaftarbarang();

        cout << "Masukkan nomor barang yang ingin dibeli: ";
        cin >> pilihan;

        cout << "Masukkan jumlah barang yang ingin dibeli: ";
        cin >> jumlah;

        int harga = 0;
        string namaBarang;

        //Percabangan
        switch(pilihan){
            case 1:
                harga = 8000;
                namaBarang = "Sarden Kaleng Kecil";
                break;
            case 2:
                harga = 22000;
                namaBarang = "Sarden Kaleng Besar";
                break;
            case 3:
                harga = 8000;
                namaBarang = "Sabun Mandi Batang";
                break;
            case 4:
                harga = 15000;
                namaBarang = "Sabun Mandi Cair";
                break;
            case 5:
                harga = 12000;
                namaBarang = "Minyak Goreng";
                break;
            case 6:
                harga = 3500;
                namaBarang = "Mie Instan";
                break;
            case 7:
                harga = 10000;
                namaBarang = "Kopi";
                break;
            case 8:
                harga = 10000;
                namaBarang = "Pasta Gigi";
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                continue; 
        }

        int total = hitungTotal(harga, jumlah);
        double pajak = hitungPajak(total);
        double diskon = 0;

        //Percabangan diskon
        if(total >= 50000){
            diskon = total * 0.1; 
        } else if(total >= 20000){
            diskon = total * 0.05; 
        } else{
            diskon = 0.0;
        }

        double Bayar = total - (diskon + pajak);

        cetakStrukPembelian(namaBarang, jumlah, harga, diskon, total, pajak, Bayar);

        cout << "\nApakah Anda ingin melakukan pembelian lagi? (y/n): ";
        cin >> ulang;
        
    } while(ulang == 'y' || ulang == 'Y');
    cout << "\nTerima kasih telah berbelanja!" << endl;
    return 0;
}