#include <stdio.h>

int main()
{
    int n1,n2; 

    printf("Inserisci il Primo Numero:"); 
    scanf("%d", &n1); 

    printf("Inserisci il Secondo Numero:"); 
    scanf("%d", &n2);

    if(n1 > n2)
        printf("Il numero %d è maggiore del numero %d\n",n1, n2); 
    else
        printf("Il numero %d è maggiore del numero %d\n",n2, n1);
    
    return 0;
}
