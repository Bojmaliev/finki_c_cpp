#include <stdio.h>


int zemiSledenZiv(int *igrajaci, int mec, int n){
    while(1){

        int sleden;
        if(mec+1 == n){
            sleden = 0;
        }else{
            sleden = mec+1;
        }
        if(igrajaci[sleden] == 1)return sleden;

        if(mec == n-1){
            mec = 0;
        }else mec++;

    }
}


int main()
{

    int n;
    scanf("%d", &n);


    int igrajci[n];
    int i;
    for(i=0; i<n; i++){
        igrajci[i] = 1;
    }

    int mec = 0;

    while(1){
        int sleden = zemiSledenZiv(igrajci, mec, n);

        if(sleden == mec){
            printf("%d e samo ziv", mec+1);
            break;
        }else{
            igrajci[sleden] = 0;
            mec = zemiSledenZiv(igrajci, sleden, n);
        }

    }

    return 0;
}
