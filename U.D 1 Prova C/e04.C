#include <stdio.h>

int main() {
    float v1 = 0;
    float v2 = 0;
    float v3 = 0;
    float avg = 0;

    printf("Inserisci il primo voto: ");
    scanf("%f", &v1);
    printf("Inserisci il secondo voto: ");
    scanf("%f", &v2);
    printf("Inserisci il terzo voto: ");
    scanf("%f", &v3);

    avg = (v1 + v2 + v3) / 3.0;
    printf("La media è %.2f", avg);

    if (avg >= 6)
    {
        printf(" Sei promosso");
    } 
    else
    {
        printf(" Sei bocciato");
    }
    return 0;
}