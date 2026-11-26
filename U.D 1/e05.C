 /* 
    Creare un programma che richiede in input due lati di una figura;
    se i lati sono uguali calcolare il perimetro della figura; se i lati sono diversi
    calcolare l'area della figura. Ovviamente comunicare il valore calcolato.
    (ipotizzando quadrato o rettangolo)
*/

#include<stdio.h>
int main(){
    float lato1 = 0 ;
    float lato2 = 0 ;
    float perimetro = 0 ;
    float area = 0 ;
    char junk;

    printf("Inserisci il primo lato: ");
    scanf("%f", &lato1);
    junk = getchar();

    printf("Inserisci il secondo lato: ");
    scanf("%f", &lato2);
    junk = getchar();

    if(lato1 == lato2)
    {
        perimetro = 4 * lato1;
        printf("Il perimetro del quadrato è: %.2f\n", perimetro);
    }
    else
    {
        area = lato1 * lato2;
        printf("L'area del rettangolo è: %.2f\n", area);
    }

    return 0;
}