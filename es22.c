#include <stdio.h>
#include <ctype.h>

int main(){

    char *stringa;

    printf("Inserisci una stringa:");
    scanf("%s",stringa);

    int i = 0;
    int vocali = 0;

    while (stringa[i] != '\0')
    {
        switch (tolower(stringa[i]))
        {
        case 'a':
            vocali++;
            break;
        case 'e':
            vocali++;
            break;
        case 'i':
            vocali++;
            break;
        case 'o':
            vocali++;
            break;
        case 'u':
            vocali++;
            break;
        default:
            break;
        }
        i++;
    }

    printf("Nella stringa %s ci sono %d vocali\n", stringa, vocali);

    return 0;
}