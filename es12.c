#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Inserisci 3 numeri\n");

    printf("Primo:");
    scanf("%d", &n1);

    printf("Secondo:");
    scanf("%d", &n2);

    printf("Terzo:");
    scanf("%d", &n3);

    int max = n1; 

    if(n2 > max)
        max = n2;
    if(n3 > max)
        max = n3; 

    printf("Il numero maggiore è: %d\n", max); 

    return 0; 
}