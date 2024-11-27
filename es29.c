#include <stdio.h>

int main(){

    int somma = 0; 
    for(int i = 0; i<=100; i++)
    {
        if(i % 2 == 0)
            somma += i;
    }

    printf("La somma dei numeri pari da 1 a 100 è: %d\n", somma); 

    return 0;
}