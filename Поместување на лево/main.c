#include <stdio.h>
int kvadrat(int k){
    int a=1;
    for(int i=0; i<k; i++)a*=10;
    return a;
}
int pomestuvanje(int n, int k){
    int brcifri=0;
    int r=n;
    while(r){brcifri++;r/=10;}
    int novbroj=(n%kvadrat(brcifri-k))*kvadrat(k) + (n/kvadrat(brcifri-k));
    return novbroj;
}
int main()
{
    int m;
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        int n,k;
        scanf("%d%d", &n,&k);
        printf("%d\n", pomestuvanje(n,k));

    }

    return 0;
}
