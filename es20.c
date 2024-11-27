#include <stdio.h>

int main(){
    
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    int risultato = 0;

    while(n != 0)
    {
        int cifra = n % 10;
        n = n / 10;
        risultato = (risultato * 10) + cifra;
    }

    printf("Il numero invertito è: %d", risultato);

    return 0;
}