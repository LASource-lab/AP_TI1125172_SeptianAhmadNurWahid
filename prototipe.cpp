#include<iostream>
using namespace std;

// Deklarasi Fungsi
int hitungLuas(int panjang, int lebar);

// Definisi Fungsi
int hitungLuas(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

// Pemanggilan Fungsi
int main(){
    int p = 10, l = 5;

    int hasil = hitungLuas(p, l);
    cout << "Panjang: " << p << endl;
    cout << "Lebar: " << l << endl;
    cout << "Luas Persegi Panjang: " << hasil << endl;
    return 0;
}