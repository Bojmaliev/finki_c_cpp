//STARTER

#include<stdio.h>
#include<string.h>

typedef struct SkiLift{
	char ime[15];
    int maxBroj;
    int upotreba;
}SkiLift;

typedef struct SkiCentar{
	char ime[15];
    char drzava[20];
    SkiLift niza[20];
    int brojLiftovi;
}SkiCentar;

int brojSkijachi(SkiCentar *sc){
	int broj=0;
    for(int i=0; sc.brojLiftovi; i++){
        if(sc->niza[i].upotreba){
        broj+=sc->niza[i].maxBroj;
        }
    }
    return broj;
}
void najgolemKapacitet(SkiCentar *sc, int n){
    int momentalnoNajgolem = 0;
    for(int i=1; i<n; i++){
        if(brojSkijachi(&sc[i]) > brojSkijachi(&sc[momentalnoNajgolem])){
        momentalnoNajgolem = i;
        }
    }

    printf("%s\n%s\n%d", sc[momentalnoNajgolem].ime, sc[momentalnoNajgolem].drzava, brojSkijachi(&sc[momentalnoNajgolem]));

}


int main()
{
    int n,i;
	scanf("%d", &n);
    SkiCentar skiCentri[n];
	for (i = 0; i < n; i++){
        scanf("%s", skiCentri[i].ime);
        scanf("%s", skiCentri[i].drzava);
        scanf("%d", &skiCentri[i].brojLiftovi);

		int j;
        for(j=0; j<skiCentri[i].brojLiftovi; j++){
            scanf("%s", skiCentri[i].niza[j].ime);
        	scanf("%d", &skiCentri[i].niza[j].maxBroj);
            scanf("%d", &skiCentri[i].niza[j].upotreba);
        }
	}

    //povik na funkcijata najgolemKapacitet
    najgolemKapacitet(skiCentri, n);

	return 0;
}
