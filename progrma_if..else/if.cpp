#include <iostream>
using namespace std;
int main(){
    long int beli, disc, total;
    printf("Masukkan Pembelian : "); scanf("%ld", &beli);
    if (beli>=100000)
    {
        disc=0.1*beli;
        total=beli-disc;
    }else{
        disc=0.05*beli;
        total=beli-disc;
    }
    printf("Jadi pembelian adalah : %ld\n",beli);
    printf("Jadi discount adalah : %ld\n",disc);
    printf("Jadi total pembayaran adalah %ld\n",total);
    
}