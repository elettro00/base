#include <stdio.h>

int main(){
    
    int l;
    printf("Inserisci la quantita di numeri di cui trovare la media: ");
    scanf("%d", &l);

    float numeri[l]; 

    printf("Inserisci i numeri\n");
    for(int i = 0; i<l; i++)
    {
        printf("Inserisci il %d numero: ", i + 1);
        scanf("%f", &numeri[i]);
    }

    float somma = 0; 

    for(int i = 0; i<l; i++)
    {
        somma += numeri[i];
    }

    float media = somma / l;

    printf("La media è: %.2f ", media);

    return 0;
}