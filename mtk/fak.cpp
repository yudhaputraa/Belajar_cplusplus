#include <stdio.h>
int faktorial(int n){
    if(n==1){
        return (1);
    }else{
        printf("%d",n);
        return (n*faktorial(n-1));
    }
}
int main()
{
    int x;
    printf("Mencari nilai faktorial\n");
    printf("Masukkan nilai x :");scanf("%d",&x);
    printf("Nilai Faktorial dari %d=%d\n",x,faktorial(x));
}
