#include <stdio.h>

int main(void) {
   char nome;
    int eta;
    printf("inserisci l'iniziale del tuo nome:");
    scanf("%d", &nome);
    printf("inserisci la tua eta:");
    scanf("%c", &eta);
    if (eta >= 18) {
        printf("%c è maggiorenne", nome);
    } else {
        printf("%c non è maggiorenne", nome);
    }
    return 0;
}
