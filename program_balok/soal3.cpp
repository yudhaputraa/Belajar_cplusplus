#include <iostream>
using namespace std;
int main(){
    int panjang, lebar, tinggi, luas, volume;
    printf("Masukkan nilai panjang :"); scanf("%d", &panjang);
    printf("Masukkan Nilai lebar : "); scanf("%d",&lebar);
    printf("Masukkan Nilai Tinggi : "); scanf("%d",&tinggi);
    luas=(2*panjang*lebar)+(2*panjang*tinggi)+(2*lebar*tinggi);
    volume=panjang*lebar*tinggi;
    printf("Jadi Luas nya adalah : %d\n", luas);
    printf("Jadi volume nya adalah : %d\n", volume);

}