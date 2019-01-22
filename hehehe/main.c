#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n];

    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
             scanf("%d", &mat[i][j]);
        }
    }
    int min,i1,j1;
     for(i=0; i<n; i++){
        min = 999999999;
        for(j=0; j<n; j++){
             if(mat[j][i] < min){
                min = mat[j][i];
                i1 = i;
                j1 = j;
             }
        }
        int temp;
        for(j=0; j<n; j++){
             if(i+j+1 == n){
                temp = mat[j][i];
               mat[j][i] = min;
               mat[j1][i1] = temp;

             }
        }
    }


    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
             printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
