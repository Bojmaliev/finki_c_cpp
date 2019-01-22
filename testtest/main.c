#include <stdio.h>

int faktoriel(int broj){
int suma = 0;
    if(broj == 1){
        return 1;
    }else{

    suma += broj + faktoriel(broj-1);

    }
    return suma;


}

int main(){

int n;
n=100;

printf("%d", faktoriel(n));


}
