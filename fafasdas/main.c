#include <stdio.h>
#include <ctype.h>
#define MAX 80

int monotonost(int vid, char*str){
int broj=0;
char niza[30];
int pecati = 0;
    while (*str != '\0') {
        str++;
        printf("%c", *str);
       if(islower(*str) && vid ==0){
        niza[broj] = *str;
        broj++;
       }else  {pecati =1;break;}
        if(isupper(*str) && vid ==1){
        niza[broj] = *str;
        broj++;

       }else {pecati =1;break;}


    }
    if(pecati == 1 && broj>=4){

        niza[broj+1] = '\0';
        puts(niza);

    }
    return broj;
}

int main()
{
    char s[MAX];
    gets(s);

    for(int i=0; i<80; i++){

        int vid;
        if(islower(s[i]))vid =0; else vid=1;

        int kolko = monotonost(vid, &s);
        i+=kolko;
        if(s[i]== '\0') break;
    }
    return 0;
}
