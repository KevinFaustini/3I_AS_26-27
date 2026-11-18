#include<stdio.h>
int main(){
    float v1=0;
    float v2=0;
    float v3=0;
    float v4=0;
    float maggiore=0;
    float avg=0;
    float somma1=0;
    float somma2=0;
    char junk;

    printf("Inserisci il primo valore:");
    scanf("%f", &v1);
    junk=getchar();

    printf("Inserisci il secondo valore:");
    scanf("%f", &v2);
    junk=getchar();

    printf("Inserisci il terzo valore:");
    scanf("%f", &v3);
    junk=getchar();

    printf("Inserisci il quarto valore:");
    scanf("%f", &v4);
    junk=getchar();

    maggiore = v1;
    if(v2>maggiore)
    {
        maggiore=v2;
    }
    if(v3>maggiore) 
    {
        maggiore=v3;
    }
    if(v4>maggiore)
    {
        maggiore=v4;
    }
    
    avg=(v1+v2+v3+v4)/4;
    printf("La media è: %2.f\n", avg);

    somma1=v1+v2;
    somma2=v3+v4;

    if(somma1>somma2)
    {
        printf("La somma maggiore tra il primo e il secondo valore o tra il terzo e il quarto valore e la prima");
    }
    else
    {
         printf("La somma maggiore tra il primo e il secondo valore o tra il terzo e il quarto valore e la seconda");
    }
    if(somma1==somma2)
    {
        printf("Le due somme sono uguali");
    }
    return 0;
}