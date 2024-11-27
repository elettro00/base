#include <stdio.h>

int main(){
    float altezza, larghezza; 

    printf("Inserisci l'altezza del rettangolo:"); 
    scanf("%f", &altezza); 

        printf("Inserisci la larghezza del rettangolo:"); 
    scanf("%f", &larghezza);

    float area = (altezza * larghezza); 

    printf("L'area di questo rettangolo risulta essere: %.2f", area); 

}