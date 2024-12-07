#include <stdio.h>
#include <string.h>

void criptografar_palavras(char frase[]) {
    char* palavra;
    int tam;
    
    palavra = strtok(frase, " ");
    while (palavra != NULL) {
        tam = strlen(palavra);
        
        for (int i = 0; i < tam; i++) {
            if (i >= tam / 2) {
                printf("?");
            } else {
                printf("%c", palavra[i]);
            }
        }

        printf(" ");
        
        palavra = strtok(NULL, " ");
    }
    printf("\n");
}

int main() {
    char frase[1000];

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);


    criptografar_palavras(frase);

    return 0;
}
