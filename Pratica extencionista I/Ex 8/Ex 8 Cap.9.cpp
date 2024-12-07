#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], caractere;
    int cont = 0;

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);

    printf("Digite um caractere: \n");
    scanf("%c", &caractere);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == caractere) {
            cont++;
        }
    }

    if (cont > 0) {
        printf("O caractere '%c' aparece %d vezes na frase\n", caractere, cont);
    } else {
        printf("O caractere '%c' nao foi encontrado na frase\n", caractere);
    }

    return 0;
}
