#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int i=0,j,dol=0,zam=0;
    if(strlen(str1)>=strlen(str2)) {
        dol=strlen(str2);
    } else {
        dol=strlen(str1);
    }
    for(i=0; i<dol; i++) {
        if(str1[i]==str2[i]) {
            str1[i]= '*';
            str2[i]= '*';
            zam++;
        }
    }
    printf("%d\n",zam);
    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
}

