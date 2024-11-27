#include <stdio.h>

int main()
{
    float k = 1.8;
    float Celsius;

    printf("Inserisci la temperatura in gradi Celsius:");
    scanf("%f", &Celsius);

    float Farenith = (Celsius * k) + 32;

    printf("La temperatura in gradi Farenith è: %.2f", Farenith); 

    return 0;
}
