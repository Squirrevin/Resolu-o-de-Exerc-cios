#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    int letras[26] = {0};
    int diff = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (letras[index] == 0) {
                letras[index] = 1;
                diff++;
            }
        }
    }

    printf("A frase contém %d letras diferentes.\n", diff);

    return 0;
}