#include <stdio.h>
int main(){
    int anno=0;
    char junk;

    printf("Inserisci un anno:");
    scanf("%d", &anno);
    junk=getchar();

    if (anno/400||anno/4)
    {
         printf("L anno e bisestile quindi febbraio ha 29 giorni");
    }