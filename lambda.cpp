#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // Mendefinisikan fungsi di dalam variabel
    auto jumlahkan = [] (int a, int b){
        return a + b;
    };
    cout << "Hasil Lambda: " << jumlahkan(5, 3) << endl;
    return 0;
}