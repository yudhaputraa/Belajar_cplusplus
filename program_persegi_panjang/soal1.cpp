#include <iostream>
using namespace std;
int main(){
    int panjang,lebar,luas,keliling;
    printf("masukkan panjang : "); scanf("%d",&panjang);
    printf("masukkan lebar : "); scanf("%d", &lebar);
    luas=panjang*lebar;
    keliling = 2*(panjang+lebar);
    printf("Jadi luasnya adalah : %d\n",luas);
    printf("Jadi keliling adalah : %d\n",keliling);
}