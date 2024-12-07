#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    char criptografada[200];
    int tam, j = 0;

    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);  // Aqui eu uso fgets para evitar o sobrecarregamento do buffer

    tam = strlen(frase);

    for (int i = tam - 1; i >= 0; i--) {
        char c = frase[i];
        
        if (isalpha(c) && strchr("aeiouAEIOU", c)) {
            criptografada[j] = '#';
        } else {
            criptografada[j] = c;
        }
        j++;
    }

    printf("Frase criptografada: %s\n", criptografada);

    return 0;
}
