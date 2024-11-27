#include <stdio.h>

int main(){

    float n; 

    printf("Inserisci un numero:");
    scanf("%f",&n);

    if(n > 0)
        printf("Il numero %.2f è positivo\n", n);
    else if(n < 0)
        printf("Il numero %.2f è negativo\n", n);
    else
        printf("Il numero %.0f è 0\n", n);

}