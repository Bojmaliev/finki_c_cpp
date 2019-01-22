#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    int max;
    if(strlen(a) > strlen(b))max=strlen(a); else max=strlen(b);

    char *pok1, *pok2;
    pok1 = a;
    pok2 = b;
    int brr=0;
    for(int i=0; i<=max; i++){
        if(*pok1 == *pok2){
            *pok1='*';
            *pok2='*';

            brr++;
        }
        pok1++; pok2++;
    }

    puts(a); puts(b);
    return 0;
}
