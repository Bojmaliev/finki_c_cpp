#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int niza[n];
    int i,k,b;

    for(i=0; i<n; i++){
        scanf("%d", &niza[i]);
    }
    scanf("%d", &k);
    for(int r=0; r<k; r++){
         b=niza[n-1];
        for(i=n-1; i>0; i=i-1){
            niza[i]=niza[i-1];
        }
        niza[0]=b;
    }
   for(i=0; i<n; i++){
        printf("%d ", niza[i]);
    }


}
