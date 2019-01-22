#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        int niza[100];
        int br;
        scanf("%d", &br);

        for(int k=0; k<br; k++)scanf("%d", &niza[k]);
        int zbir=0;
        for(int k=0; k<br/2; k++){
            if(niza[k]==niza[br-1-k])zbir+= niza[k]*2;
        }
        printf("%d", zbir);


    }
    return 0;
}
