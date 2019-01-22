#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float niza[n];

    scanf("%f%f", &niza[0], &niza[1]);
    for(int i=2; i<n; i++){
        float zbir=0;
            for(int k=0; k<i; k++)zbir+=niza[k];

        zbir/=2.00;
        niza[i]=zbir;
    }

    for(int i=0; i<n; i++)printf("%.2f ", niza[i]);
}
