#include <stdio.h>

int main(){

    int l;
    printf("Inserisci la quantita di numeri che vuoi inserire: ");
    scanf("%d", &l);

    int numero; 
    
    int dispari = 0;

    for(int i = 0; i<l; i++)
    {
        printf("Inserisci il %d numero: ", i + 1);
        scanf("%d", &numero);
        if(numero % 2 == 1) dispari++;
    }

    printf("I numeri positi nella sequenza inserita sono: %d\n", dispari); 
    

    return 0;
}