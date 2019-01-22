#include <stdio.h>
#include <stdlib.h>
void wtf() {
    FILE *f = fopen("dokumenti.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}


int main()
{
   // wtf();
    FILE *f = fopen("dokumenti.txt", "r");
    int br;
    char *niza[80];
    int i=0;
    while(1){
       int i= fgets(niza, 80, f);
       if(i == 0)break;

       printf("%s", niza);

    }

    return 0;
}
