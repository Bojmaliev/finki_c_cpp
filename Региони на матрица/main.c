#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int niza[n][n];
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)niza[i][j];

    int sum1=0,sum2=0,sum3=0,sum4=0;
    for(int i=0; i<n; i++)for(int j=0; j<n; j++){
           scanf("%d", &niza[i][j]);
            if(i==j || i+j==n-1)continue;
        if(i<j){
            if(i+j<n)sum1+=niza[i][j];else if(i+j>=n)sum2+=niza[i][j];
        }else if(i>j){
            if(i+j<n)sum4+=niza[i][j];else if(i+j>=n)sum3+=niza[i][j];
        }
    }

    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            int br=0;
        if(i==j || i+j==n-1){
            br=0;
        }else if(i<j){
            if(i+j<n)br=sum1-niza[i][j];else if(i+j>=n)br=sum2-niza[i][j];
        }else if(i>j){
            if(i+j<n)br=sum4-niza[i][j];else if(i+j>=n)br=sum3-niza[i][j];
        }
        printf("%d",br);
    }
    printf("\n");
    }
    return 0;
}
