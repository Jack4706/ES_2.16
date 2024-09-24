#include <stdio.h>

int main() {

    const int PROVVIGIONE = 15;
    float biglietto, valoreProvvigione;

    printf("inserisci il prezzo del biglietto:\n");
    scanf("%f", &biglietto);

    valoreProvvigione = (biglietto*PROVVIGIONE)/100;
    biglietto += (biglietto*PROVVIGIONE)/100;

    printf("il valore della provvigione e' %.2f, il prezzo finale del biglietto e' %.2f",valoreProvvigione,biglietto);

    return 0;
}