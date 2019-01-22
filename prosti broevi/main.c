#include <stdio.h>
#include <stdlib.h>

int prost(int broj){
    for(int i = 2; i<broj/2; i++){
        if(broj % i == 0)return 0;
    }
    return 1;
}
int main()
{
    int broevi[] = {1,2,3,5,6,7,19};
    int golemina = 7;
    int prosti=0;

    for(int i=0; i<golemina; i++){
        if(prost(broevi[i]))prosti++;
    }
    printf("%d", prosti);

}
