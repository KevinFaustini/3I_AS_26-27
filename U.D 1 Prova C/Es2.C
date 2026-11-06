/*Scrivi un programma in C che valuti la situazione di uno studente universitario sulla base
del voto d'esame e della percentuale di frequenza alle lezioni. Il programma deve:
1. Acquisire il voto dell'esame (un numero float compreso tra 0.0 e 30.0).
2. Acquisire la percentuale di presenza alle lezioni (un numero intero da 0 a 100).
3. Utilizzare strutture if-else innestate secondo la seguente logica:
• Se il voto è inferiore a 18: lo studente è Bocciato.
• Se il voto è maggiore o uguale a 18: lo studente ha superato l'esame. All'interno di
questo blocco, verificare la frequenza:
• Se il voto è esattamente 30.0 E la percentuale di presenza è $\ge$ 85%, stampare
"Esame superato con Lode e Menzione d'onore!".
• Altrimenti, stampare "Esame superato con successo.".*/

#include<stdio.h>
int main(){
    float voto_esame = 0;
    int presenze_lezioni = 0;
    float lezioni_totali = 100;
    float frequenza_lezioni_percentuale = 0;
    char junk;

    printf(" Inserisci il tuo voto dell'esame. N.B il voto deve essere compreso tra 0.0 e 30.0: ");
    scanf("%f", &voto_esame);
    junk = getchar();
    while(voto_esame>30.0||voto_esame<0)
    {
        printf(" Voto non valido. Riprovare.\n Inserisci il tuo voto dell'esame. N.B il voto deve essere compreso tra 0.0 e 30.0: ");
        scanf("%f", &voto_esame);
    }
    
    printf(" Inserire il numero di presenze a lezione. N.B il numero deve essere tra 0 e 100: ");
    scanf("%d", &presenze_lezioni);
    junk = getchar();
    while(presenze_lezioni>100||presenze_lezioni<0)
    {
        printf(" Numero non valido. Riprovare.\n Inserire il numero di presenze a lezione. N.B il numero deve essere tra 0 e 100: ");
        scanf("%d", &presenze_lezioni);
    }

    frequenza_lezioni_percentuale=(presenze_lezioni/lezioni_totali)*100;
    
    if(voto_esame<18)
    {
        printf("Sei bocciato!");
    }
    if(voto_esame>=18&&voto_esame<30)
    {
        printf(" Sei promosso! e la tua frequenza a lezione è del: %.2f%%\n ", frequenza_lezioni_percentuale );
    }
    if(voto_esame==30.0&&frequenza_lezioni_percentuale>=85)
    {
        printf(" Esame superato con Lode e Menzione d'onore! ");
    }
    else
    {
        printf(" Esame superato con successo. ");
    }
    
    return 0;
}