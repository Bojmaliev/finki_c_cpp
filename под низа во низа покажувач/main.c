#include <stdio.h>

void max_niza(int a[], int n, int *pos, int *len){

    *pos=0;
    *len=1;
    for(int i=0; i<n-1; i++){
        int start=i, curlen=1;
        while(a[i]<a[i+1]){
            curlen++;
            i++;
            if(i-1 == n)break;

        }

        if(curlen>*len){
            *len=curlen;
            *pos=start;
        }


    }
}

int main()
{
    int n,pos,len;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++)scanf("%d",&a[i]);

    max_niza(a, n, &pos,&len);

    printf("Start: %d Lenth: %d",pos,len);

    return 0;
}
