#include <stdio.h>

int main(){
    int a;

    printf("Inserisci un Numero:"); 
    scanf("%d", &a);
    
    int divisori[a];
    int l = 0;

    for(int i = 1; i<=a; i++)
    {
        if(a % i == 0){
            divisori[l] = i;
            l++;
        }
    }

    printf("I suoi divisori sono: ");
    for(int i = 0; i<l; i++)
        printf("%d ", divisori[i]);

    printf("\n");
    
    if(divisori[0] == 1 && divisori[1] == a)
        printf("Il numero è primo");
    else
        printf("Il numero non è primo");

    return 0; 
}