#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    int letras = 0, numeros = 0, espacos = 0;

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])) {
            letras++;
        }
        else if (isdigit(frase[i])) {
            numeros++;
        }
        else if (isspace(frase[i])) {
            espacos++;
        }
    }

    printf("Letras: %d\n", letras);
    printf("Numeros: %d\n", numeros);
    printf("Espacos: %d\n", espacos);

    return 0;
}
