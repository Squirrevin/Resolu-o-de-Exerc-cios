#include <stdio.h>
#include <string.h>

void criptografar_frase(char frase[]) {
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'A') {
            printf("1");
        } else if (frase[i] == 'e' || frase[i] == 'E') {
            printf("2");
        } else if (frase[i] == 'i' || frase[i] == 'I') {
            printf("3");
        } else if (frase[i] == 'o' || frase[i] == 'O') {
            printf("4");
        } else if (frase[i] == 'u' || frase[i] == 'U') {
            printf("5");
        } else {
            printf("%c", frase[i]);
        }
    }
    printf("\n");
}

int main() {
    char frase[100];

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);

    criptografar_frase(frase);

    return 0;
}
