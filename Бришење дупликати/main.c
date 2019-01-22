#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int niza[n];
    for(int i=0; i<n; i++)scanf("%d", &niza[i]);

    for(int i=0; i<n; i++){

        for(int k=i+1; k<n; k++){

            if(niza[i] == niza[k]){
                for(int r=k; r<n-1; r++)niza[r]=niza[r+1];
                k--;n--;
            }
        }
    }
    for(int i=0; i<n; i++)printf("%d", niza[i]);

    return 0;
}
