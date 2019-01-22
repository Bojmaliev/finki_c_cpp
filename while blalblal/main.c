#include <stdio.h>

int main()
{

    int broj = 234324234;
    int brojCifri=0;
    while(broj > 0){

        broj/= 10;
        brojCifri++;
    }

    printf("%d", brojCifri);
    /*int m,n;
    scanf("%d %d", &m, &n);

    for(int i=m; i<=n; i++){

        if(i % 2 == 0){
            //parni
            int zbir=0;
            int pomosna = i;
            while(pomosna> 0){
                zbir += pomosna%10;
                pomosna/=10;
            }

            printf("%d\n", zbir);

        }else{
            //neparni

            int novBroj=0;
            int pomosna = i;

            while(pomosna > 0){
                novBroj *=10;
                novBroj += pomosna%10;

                pomosna/=10;
            }
            printf("%d\n", novBroj);
        }

    }*/

   /* int n,i;
    scanf("%d",&n);
    int r1 =0,r2 =0,r3 = 0;
    for(i=0; i<n;i++){
        int broj;
        scanf("%d",&broj);
        if(broj%3==0)r1++;
        else if(broj%3==1)r2++;
        else if(broj%3==2)r3++;


    }

    printf("%d %d %d", r1, r2, r3);*/





    /*int broj =12345674;

    int brojCifri=0;

    while(broj>0)
    {
        brojCifri++;
        broj/=10;
    }
    printf("%d cifri",brojCifri);*/
    /*char broj;

    while(scanf("%d", &broj)){

       printf("%d\n", broj);
    }*/

    /*int n,i;
    scanf("%d", &n);

    for(i=0;i<n;i++){

        int broj;
        scanf("%d", &broj);

        if(broj %2 == 0)printf("%d e paren\n", broj);

    }*/
   /*int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a; i<=b; i++){
        int broj =i;
        while (broj>0){
            int posldentaCifra = broj%10;
                if(posldentaCifra%2!=0) break;

            broj/=10;
        }
        if (broj==0){
            printf("Brojot %d e blag\n", i);
            break;

        }

    }
*/
    /*
    int broj = 28441;

    while(broj>0){
        int poslednaCifra = broj%10;
        if(poslednaCifra % 2 != 0)break;
        broj/=10;
    }
    if(broj != 0)printf("brojot e blag");*/
    return 0;
}
