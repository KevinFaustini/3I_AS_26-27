/*
Scrivi un programma in C per calcolare il costo di una bolletta della luce in base al consumo
energetico in kWh (float) e alla tipologia di utente (intero: 1 per Residente, 2 per Non
Residente).
Il programma deve prima verificare che la tipologia sia valida (1 o 2) e che il consumo non sia
negativo. Successivamente, applica le tariffe a scaglioni:
    • Se l'utente è Residente (1):
        • Primi 150 kWh consumati: tariffa di 0.20 €/kWh.
        • Per i kWh eccedenti i 150 fino a 300 kWh: tariffa di 0.30 €/kWh.
        • Per i kWh oltre i 300: tariffa di 0.40 €/kWh.
    • Se l'utente è Non Residente (2):
        • Primi 150 kWh consumati: tariffa di 0.35 €/kWh.
        • Per i kWh eccedenti i 150 fino a 300 kWh: tariffa di 0.45 €/kWh.
        • Per i kWh oltre i 300: tariffa di 0.55 €/kWh.
Infine, aggiungi una quota fissa di gestione pari a 15.50 € per i residenti e 25.00 € per i non
residenti, stampando il dettaglio dei calcoli.
*/
#include <stdio.h>

int main() {
    int tipologia;
    float consumo, costo_totale = 0, quota_fissa;

    printf("Inserisci la tipologia di utente (1 per Residente, 2 per Non Residente): ");
    scanf("%d", &tipologia);

    printf("Inserisci il consumo energetico in kWh: ");
    scanf("%f", &consumo);

    if (tipologia != 1 && tipologia != 2) 
    {
        printf("Tipologia non valida.\n");
        return 1;
    }

    if (consumo < 0) 
    {
        printf("Consumo non valido.\n");
        return 1;
    }

    if (tipologia == 1) 
    {
        quota_fissa = 15.50;
        if (consumo <= 150) {
            costo_totale = consumo * 0.20;
        } else if (consumo <= 300) {
            costo_totale = 150 * 0.20 + (consumo - 150) * 0.30;
        } else {
            costo_totale = 150 * 0.20 + 150 * 0.30 + (consumo - 300) * 0.40;
        }
    } 
    else 
    {
        quota_fissa = 25.00;
        if (consumo <= 150) {
            costo_totale = consumo * 0.35;
        } else if (consumo <= 300) {
            costo_totale = 150 * 0.35 + (consumo - 150) * 0.45;
        } else {
            costo_totale = 150 * 0.35 + 150 * 0.45 + (consumo - 300) * 0.55;
        }
    }

    costo_totale += quota_fissa;

    printf("Dettaglio del calcolo:\n");
    printf("Consumo: %.2f kWh\n", consumo);
    printf("Quota fissa: %.2f €\n", quota_fissa);
    printf("Costo totale: %.2f €\n", costo_totale);

    return 0;
}