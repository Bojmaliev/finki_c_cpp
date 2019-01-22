#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int suma=0;
    int mnozenje=1;
    while(n>0){
        int pc=n%10;

        if(pc == 5)pc=9;
        if(pc==7)pc=8;
        suma+=mnozenje*pc;
        mnozenje*=10;
        n/=10;
    }

    printf("%d", suma);
    return 0;
}
