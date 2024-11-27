#include <stdio.h>

// int calcolaMCD(int a, int b)
// {
//      while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

int main(){
    int n1, n2;

    printf("Inserisci il Primo Numero:"); 
    scanf("%d", &n1); 

    printf("Inserisci il Secondo Numero:"); 
    scanf("%d", &n2);

    int MCD = n1;
    int b = n2;

    while (b != 0) {
        int temp = b;
        // printf("b->%d   mcd->%d   temp->%d\n", b, MCD, temp);
        b = MCD % b;
        MCD = temp;
        // printf("MCD Calcolato --> %d\n", MCD);
    }

    int mcm = (n1 * n2) / MCD;

    printf("Il minimo comune multiplo e': %d", mcm);

    return 0; 
}