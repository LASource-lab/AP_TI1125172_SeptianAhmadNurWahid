#include<iostream>
using namespace std;

// Deklarasi dan Definisi Fungsi
void tampilkanGaris(int panjang = 10){
    for(int i = 0; i < panjang; i++){
        cout << "-";
    }
    cout << endl;
}

// Pemanggilan Fungsi
int main(){
    tampilkanGaris();
    tampilkanGaris(20);
    return 0;
}