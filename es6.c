#include <stdio.h>

int main()
{
    int n;

    printf("Inserisci un numero positivo:  ");
    scanf("%d",&n);

    int fattoriale = 1; 

    for (int i = 2; i <= n; i++)
    {
        fattoriale *= i; 
    }

    printf("Il fattoriale del numero %d è %d\n", n, fattoriale); 

    return 0;
}
