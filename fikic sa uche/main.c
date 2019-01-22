#include <stdio.h>

int main()
{    int kova=99999999;
    for(int i=0; i<10; i++){
        int a;
        scanf("%d", &a);
        if(a<kova) kova=a;
    }
printf("%d", kova);
    return 0;
}
