#include <stdio.h>

int main(){

    int n;

    printf("Inserisci un numero:");
    scanf("%d",&n);

    if(n % 2 == 0)
        printf("Il numero %d è pari\n", n);  
    else
        printf("Il numero %d è dispari\n", n); 

}