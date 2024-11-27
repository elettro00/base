#include <stdio.h>

int main(){
    int a;

    printf("Inserisci un Numero:"); 
    scanf("%d", &a);
    
    printf("I divisori di %d sono: ", a);

    for(int i = 1; i<=a; i++)
    {
        if(a % i == 0){
            printf("%d", i);
        
        if(i < a) printf(" , ");
        else printf("\n");
        }
    }

    return 0;
}