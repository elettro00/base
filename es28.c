#include <stdio.h>

int main(){
    char *stringa;

    printf("Inserisci una stringa:");
    scanf("%s",stringa);

    int i = 0; 
    while (stringa[i] != '\0')
    {
        if(stringa[i] >= 97  && stringa[i] <= 122)
            stringa[i] = stringa[i] - 32;
        i++;
    }
    
    printf("La stringa ora è cosi: %s\n", stringa); 
    return 0;
}