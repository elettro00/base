#include <stdio.h>

int main(){

    float n1, n2; 

    printf("Inserisci il Primo Numero:"); 
    scanf("%f", &n1); 

    printf("Inserisci il Secondo Numero:"); 
    scanf("%f", &n2);

    float somma = n1 + n2;
    float differenza = n1 - n2;
    float prodotto = n1 * n2;
    float quozionte = n1 / n2;

    printf("La somma è: %.2f\n", somma);  
    printf("La differenza è: %.2f\n", differenza);  
    printf("Il prodotto è: %.2f\n", prodotto);  
    printf("Il quoziente è: %.2f\n", quozionte);  

    return 0;
}