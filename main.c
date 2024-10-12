#include <stdio.h>
int main() {
    int a, b, n, i;
    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);
    printf("Inserisci il valore di n: ");
    scanf("%d", &n);
    i = a;
    while (i % n != 0) {
        i++;
    }
    printf("I multipli di %d compresi tra %d e %d sono: \n", n, a, b);
    while (i <= b) {
        printf("%d\n", i);
        i += n;
    }
}