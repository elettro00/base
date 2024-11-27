#include <stdio.h>

int main(){

    int l;
    printf("Inserisci la quantita di numeri che vuoi inserire: ");
    scanf("%d", &l);

    float numero; 
    
    int positivi = 0;

    for(int i = 0; i<l; i++)
    {
        printf("Inserisci il %d numero: ", i + 1);
        scanf("%f", &numero);
        if(numero > 0) positivi++;
    }

    printf("I numeri positi nella sequenza inserita sono: %d\n", positivi); 

    return 0;
}