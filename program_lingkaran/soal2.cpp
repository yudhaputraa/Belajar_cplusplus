#include <iostream>
using namespace std;
int main(){
    int jari;
    float luas, keliling;

    printf("Masukkan  jari-jari : "); scanf("%d",&jari);

    luas = 3.141593*jari*jari;
    keliling=2*3.141593*jari;
    printf("Jadi luasnya adalah : %f\n",luas);
    printf("Jadi keliling adalah : %f",keliling);
}