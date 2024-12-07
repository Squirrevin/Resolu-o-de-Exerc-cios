#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200], resultado[200];
    int i = 0, j = 0;

    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);

    while (isspace(frase[i])) {
        i++;
    }
	
	while (frase[i] != '\0') {
        if (!isspace(frase[i]) || (isspace(frase[i]) && !isspace(frase[i + 1]))) {
            resultado[j++] = frase[i];
        }
        i++;
    }

    resultado[j] = '\0';

    printf("Frase sem espaços excedentes: '%s'\n", resultado); 

return 0;   
}