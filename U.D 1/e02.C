/*
    Data: 20.10.2026
    Author: Kevin Faustini
    Description: Semplice programma che somma due valori richiesti in input.
*/
#include <stdio.h>

int main(){
    // dichiarazione delle variabili necessarie al nostro algoritmo
    int a;
    int b;
    int c;
    // junk è usata per pulire il buffer nelle fasi di input.
    char junk;

    // inizzializzazione delle variabili
    a = 0;
    b = 0;
    c = 0;

    // fase di input dei valori A e B
    printf("Inserisci il valore a: ");
    scanf("%d", &a);
    junk = getchar();
    
    printf("Inserisci il valore b: ");
    scanf("%d", &b);
    junk = getchar();
    
    // calcolo in C la somma dei valori A e B
    c = a + b;
    
    //comunico il valore della somma
    printf("La somma vale: %d", c);
    
    printf("\n---\n");
    return 0;
}