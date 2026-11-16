#include <stdio.h>
int main(){
    int bm=0;
    int bM=0;
    int h=0;
    int area=0;
    int perim=0;
    char junk;

    printf("Inserisci base minore:");
    scanf("%d", &bm);
    junk=getchar();

    printf("Inserisci Base maggiore:");
    scanf("%d", &bM);
    junk=getchar();

    printf("Inserisci Altezza:");
    scanf("%d", &h);
    junk=getchar();

    if (h==0)
    {
        if (bm==bM)
        {
            area=bm*bM;
            printf("L'area vale:%d", area);
        }
        else
        {
            perim=(bm+bM)*2;
            printf("Il perimetro vale:%d", perim);
        }
    }
    else
    {
        area=(bm+bM)*h/2;
        printf("L'area vale:%d", area);
    }
    return 0;
}