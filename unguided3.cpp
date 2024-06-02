#include <iostream>
using namespace std;

//2311102034_Rizal Dwi Anggoro_IF-11-A

int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int cari = 4;
    int ketemu =0;
    int i;
    
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu++;

        }
    }

    cout << "Sequential Search\n";
    cout << "DATA : {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}\n";

    if (ketemu){
        cout << "Angka " << cari << " Ada Sebanyak " << ketemu << endl;
    }else{
        cout << "data tidak ditemukan\n" ;
    }

return 0;
}