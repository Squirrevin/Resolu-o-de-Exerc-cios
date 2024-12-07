#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], resultado[200];
    int i, j = 0;

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);

    for (i = 0; i < strlen(frase); i++) {
        resultado[j++] = frase[i];
        resultado[j++] = frase[i];
    }

    printf("Frase com caracteres duplicados: \n%s\n", resultado);

    return 0;
}