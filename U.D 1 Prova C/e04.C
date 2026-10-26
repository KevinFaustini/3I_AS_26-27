#include <stdio.h>

int main() {
    float v1 = 0;
    float v2 = 0;
    float v3 = 0;
    float avg = 0;
    char junk;

    printf("Inserisci il primo voto: ");
    scanf("%f", &v1);
    junk = getchar();

    printf("Inserisci il secondo voto: ");
    scanf("%f", &v2);
    junk = getchar();

    printf("Inserisci il terzo voto: ");
    scanf("%f", &v3);
    junk = getchar();

    avg = (v1 + v2 + v3) / 3.0;
    printf("La media è %.2f\n\n", avg);

    if (avg >= 6)
    {
        printf("Sei promosso\n");
    } 
    else
    {
        printf(" Sei bocciato\n");
    }
    return 0;
}