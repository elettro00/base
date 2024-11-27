#include <stdio.h>

int recursiveFibonacci(int n) //per trova il n numero della sequenza di fibonacci
{
    if(n <= 0)
        return 0;
    if(n == 1)
        return 1;

    return recursiveFibonacci(n-1) + recursiveFibonacci(n -2);
}

void classicFibonacci(int n)
{
    int fibonacci = 0;
    int temp1 = 0;
    int temp2 = 1;

    printf("%d\t%d\t", temp1, temp2);

    for(int i = 2; i < n; i++)
    {
        fibonacci = temp1 + temp2;

        printf("%d\t", fibonacci);

        temp1 = temp2;
        temp2 = fibonacci;
    }
}

int main(){

    int n;
    printf("Inserisci un numero:");
    scanf("%d", &n);

    classicFibonacci(n);

    printf("\n");

    for(int i = 0 ; i<n; i++)
        printf("%d\t", recursiveFibonacci(i));

    return 0;
}