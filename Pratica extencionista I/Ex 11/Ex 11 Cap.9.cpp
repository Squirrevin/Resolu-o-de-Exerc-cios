#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200], palavras[200][100];
    int contagem[200] = {0};
    int num_palavras = 0;

    printf("Digite uma frase: \n");
    fgets(frase, 200, stdin);

    char *palavra = strtok(frase, " ");
    while (palavra != NULL) {
        for (int i = 0; palavra[i]; i++) {
            palavra[i] = tolower(palavra[i]);
        }

        strcpy(palavras[num_palavras], palavra);

        int achou = 0;
        for (int i = 0; i < num_palavras; i++) {
            if (strcmp(palavras[i], palavra) == 0) {
                contagem[i]++;
                achou = 1;
                break;
            }
        }

        if (!achou) {
            contagem[num_palavras] = 1;
            num_palavras++;
        }

        palavra = strtok(NULL, " ");
    }

    printf("\nContagem das palavras: \n");
    for (int i = 0; i < num_palavras; i++) {
        printf("'%s' aparece %d vezes\n", palavras[i], contagem[i]);
    }

    return 0;
}
