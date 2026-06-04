#include<iostream>
using namespace std;

// Deklarasi dan Definisi Fungsi
double bagi(double a, double b){
    if(b == 0) return 0;
    return a / b;
}

// Pemanggilan Fungsi
int main(){
    cout << "Hasil bagi: " << bagi(10, 2) << endl;
    return 0;
}