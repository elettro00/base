#include <stdio.h>

int main()
{
    int n;

    printf("Inserisci un numero:  ");
    scanf("%d",&n);

    int sommaPrimiN = 0; 

    for (int i = 1; i <= n; i++)
    {
        sommaPrimiN += i; 
    }

    printf("La somma dei numeri da 0 a %d è %d\n", n, sommaPrimiN); 

    return 0;
}
