#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], caractere;
    int posicao = -1;

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);


    printf("Digite um caractere: \n");
    scanf("%c", &caractere);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == caractere) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("O caractere '%c' aparece pela primeira vez na posicao %d\n", caractere, posicao);
    } else {
        printf("O caractere '%c' nao foi encontrado na frase\n", caractere);
    }

    return 0;
}
