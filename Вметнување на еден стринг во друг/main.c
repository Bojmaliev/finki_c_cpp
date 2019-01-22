#include <stdio.h>
#include <string.h>

void vmetni(char *a, char *b, int p){

    int s = strlen(a);
    int s1 = strlen(b);

    for(int i=s-1; i>=p; i--){
        *(a+i+s1-1) = *(a+i-1);
    }
    for(int i=p; i<p+s1; i++){
        *(a+i) = *b;
        b++;
    }
}

int main()
{
   char a[100],b[100];
   gets(a);gets(b);
   int poz;
   scanf("%d", &poz);
    vmetni(&a, &b, poz);

    puts(a);
   return 0;
}
