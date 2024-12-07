#include <stdio.h>
#include <string.h>

void criptografar_palavras(char frase[]) {
    char* palavras[100];
    int i = 0, j = 0;
    char* palavra;
    
    palavra = strtok(frase, " ");
    while (palavra != NULL) {
        palavras[i++] = palavra;
        palavra = strtok(NULL, " ");
    }

    for (int k = 0; k < i - 1; k += 2) {
        char* p1 = palavras[k];
        char* p2 = palavras[k + 1];
        int len1 = strlen(p1);
        int len2 = strlen(p2);
        
        for (int l = 0; l < (len1 < len2 ? len1 : len2); l++) {
            printf("%c%c", p1[l], p2[len2 - l - 1]);
        }
        if (len1 > len2) {
            for (int l = len2; l < len1; l++) {
                printf("%c", p1[l]);
            }
        } else if (len2 > len1) {
            for (int l = len1; l < len2; l++) {
                printf("%c", p2[l]);
            }
        }

        printf(" ");
    }

    if (i % 2 != 0) {
        for (int l = strlen(palavras[i - 1]) - 1; l >= 0; l--) {
            printf("%c", palavras[i - 1][l]);
        }
    }

    printf("\n");
}

int main() {
    char frase[100];

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);

    frase[strcspn(frase, "\n")] = '\0';

    criptografar_palavras(frase);

    return 0;
}
