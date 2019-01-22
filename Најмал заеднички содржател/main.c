#include <stdio.h>
int nzs(int arr[],int r){
    int greska=0;
    for(int i=0; i<5; i++){
        if(i%r !=0)greska=1;
    }
    if(greska==0)return r;else{
     if(nzs(arr, r+r))return r+r;

    }

}

int main()
{
    int arr = {4,5,7,6,7};
    printf("%d", nzs(arr, 4));

    return 0;
}
