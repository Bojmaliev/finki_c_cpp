#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dolzinaZbor(char * zbor){
    int vkupno=0;
    while(1){
        if(zbor[0] == ' ' || zbor[0] == '0'){
            return vkupno;
        }else{
            zbor++;
            vkupno++;
        }
    }
}

char *brishenje(char * niza, int broj){
    char * d = niza;
    while(1){
        *d = *(d+broj+1);
        if(d[broj] == '0')break;
        d++;
    }
    return niza;

}

int main()
{
    char niza[100];
    strcpy(niza, "aaa bb ccc d1d1d1d1 eeeee 6c6c6c6c ssss 1.#1 55555 r2r2r2r2r2r2 tt0");
    char *p = &niza;
    int brojCifri=0;
    int vkupno=0;

    while(1){
        int kolku = dolzinaZbor(p);
        brojCifri+=kolku;
        vkupno++;
        p+=kolku;
        if(*p == '0')break;
        p++;
    }

    int prosecno = brojCifri/vkupno;
    int isfrleni = 0;
    char *r = &niza;

        while(1){
        int kolku = dolzinaZbor(r);

        if(kolku > prosecno){
            r = brishenje(r, kolku);
            isfrleni++;
        }else{r+=kolku;}

            if(*r == '0')break;
            r++;

        }
   printf("%d%d%s", prosecno, isfrleni, niza);


    return 0;
}
