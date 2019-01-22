#include <stdio.h>

int main(){

    int a = 1234;
    int sumaParni = 0;
    int sumaNeparni = 0;
    while(a>0){
        int cifra = a%10;

            if(cifra%2 == 0){
                sumaParni+=cifra;
            }else{
                sumaNeparni+=cifra;
            }

        a=a/10;
    }

    printf("%d %d", sumaParni, sumaNeparni);

}
