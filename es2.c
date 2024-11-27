#include <stdio.h>

int main(){
    int n1, n2; 

    printf("Inserisci il Primo Numero:"); 
    scanf("%d", &n1); 

    printf("Inserisci il Secondo Numero:"); 
    scanf("%d", &n2);

    int somma = n1 + n2; 

    printf("La somma tra %d e %d risulta essere: %d\n", n1, n2, somma); 

}

