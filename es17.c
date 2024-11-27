#include <stdio.h>
#define MAX_LEN 10

int len(char *stringa){
    int lunghezza = 0;
    while (stringa[lunghezza] != '\0')
    {
        lunghezza++;
        if(lunghezza > MAX_LEN){
            printf("La stringa e' troppo lunga...\n");
            return -1;
        }
    }
    return lunghezza;
}

int main(){
    char stringa[MAX_LEN];

    printf("Inserisci una stringa:");
    scanf("%s",stringa);

    printf("%s\n", stringa);

    int lunghezza = len(stringa);
    if(lunghezza > 0)
        printf("La lunghezza della stringa %s e': %d", stringa, lunghezza);

    return 0;
}