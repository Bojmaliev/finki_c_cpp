#include <stdio.h>

int rek1(int niza[], int i){
if(i==0)return 0;
    return niza[i]+rek1(niza, i-1);
}

int rek(int niza[], int i){
    if(i==0)return 0;

    return rek1(niza, i)+rek(niza, i-1);
}


int main()
{
    int n;
    scanf("%d", &n);
    int niza[n];

    for(int i=1; i<=n; i++){
    	scanf("%d", &niza[i]);
    }
    niza[0]=0;

    for(int i=1; i<n; i++){
        printf("%d\n", rek(niza, i));
    }

    return 0;
}
