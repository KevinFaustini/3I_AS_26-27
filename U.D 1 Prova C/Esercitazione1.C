/*Scrivi un programma in C che simuli la cassa di un negozio. Il programma deve:
1. Chiedere all'utente di inserire il prezzo unitario di un articolo (valore float) e la quantità
acquistata (valore intero).
2. Calcolare il prezzo totale lordo (prezzo_unitario * quantita).
3. Applicare una politica di sconto basata sulla quantità:
• Se la quantità acquistata è maggiore di 10, viene applicato uno sconto del 15% sul
totale.
• Altrimenti, non viene applicato alcuno sconto.
4. Stampare a schermo il totale lordo, l'eventuale sconto applicato e il prezzo finale netto
(formattato con due cifre decimali).*/

#include<stdio.h>
int main(){
    float prezzo_unitario_articolo = 0;
    int   quantita_acquistata = 0;
    float prezzo_totale_lordo= 0;
    float sconto = 0;
    float prezzo_finale_netto = 0;
    char junk;

    printf("Inserire il prezzo unitario dell'articolo: ");
    scanf("%f", &prezzo_unitario_articolo);
    junk=getchar();

    printf("Inserire la quantità acquistata: ");
    scanf("%d", &quantita_acquistata);
    junk=getchar();

    prezzo_totale_lordo = prezzo_unitario_articolo * quantita_acquistata;

    if(quantita_acquistata > 10)
    {
        sconto = prezzo_totale_lordo * 0.15;    
    } 
    
    prezzo_finale_netto = prezzo_totale_lordo - sconto;

    printf("Totale lordo: %.2f\n", prezzo_totale_lordo);
    printf("Sconto applicato: %.2f\n", sconto);
    printf("Prezzo finale netto: %.2f\n", prezzo_finale_netto);
    return 0;
}