#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf("Inserisci 3 numeri\n");

    printf("Primo:");
    scanf("%f", &n1);

    printf("Secondo:");
    scanf("%f", &n2);

    printf("Terzo:");
    scanf("%f", &n3);

    float media = (n1 + n2 + n3) / 3;

    printf("La media di questi numeri è %.2f\n", media); 

    return 0;
}
