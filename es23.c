#include <stdio.h>

int main(){

    int l;
    printf("Inserisci la quantita di numeri che vuoi inserire: ");
    scanf("%d", &l);

    float numero; 
    
    printf("Inserisci il 1 numero: ");
        scanf("%f", &numero);

    float max = numero;

    for(int i = 1; i<l; i++)
    {
        printf("Inserisci il %d numero: ", i + 1);
        scanf("%f", &numero);
        if(numero > max) max = numero;
    }

    printf("Il valore maggiore dei numeri inseriti è: %.2f\n", max); 

    return 0;
}