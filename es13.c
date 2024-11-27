#include <stdio.h>

int main()
{
    int base, potenza;

    printf("Inserisci la base:");
    scanf("%d", &base);

    printf("Inserisci la potenza:");
    scanf("%d", &potenza);

    float risultato = 1.00;

    if (potenza == 0 || base == 1){
        printf("Il risultato di %d elevato ad %d risulta essere 1\n", base, potenza);
        return 0;
    }

    if (potenza > 0)
        for (int i = 0; i < potenza; i++)
            risultato *= base;
    else
        for (int i = potenza; i < 0; i++)
            risultato /= (float)base;

    printf("Il risultato di %d elevato ad %d risulta essere %f\n", base, potenza, risultato);

    return 0;
}