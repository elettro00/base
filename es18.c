#include <stdio.h>

int main(){
    int a, b; 

    printf("Inserisci il Primo Numero:"); 
    scanf("%d", &a); 

    printf("Inserisci il Secondo Numero:"); 
    scanf("%d", &b);

    a=a^b;
    b=b^a;
    a=a^b;

    printf("%d %d\n",a,b);

    return 0;
}