#include<iostream>
using namespace std;

// Tanda & berarti referensi ke variabel asli
void naikkanGaji(int &gaji){
    gaji = gaji + 1000;
}

// Pemanggilan fungsi
int main(){
    int gajiSaya = 5000;
    naikkanGaji(gajiSaya);
    cout << "Gaji sekarang: " << gajiSaya << endl;
    return 0;
}