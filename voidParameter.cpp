#include<iostream>
using namespace std;

// Deklarasi dan Definisi Fungsi 
// Bentuk Umum
void salam(){
    cout << "Selamat Belajar C++!" << endl;
}

// Bentuk Eksplisit (lebih formal dalam standar C lama)
void versiLama(void){
    cout << "Ini juga bisa." << endl;
}

// Pemanggilan Fungsi
int main(){
    salam();
    versiLama();
    return 0;
}