#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ESPACO ' '

int main() {
    char frase[200], resultado[200];
    int i = 0, j = 0;
    int tam;

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
    
    tam = strlen(resultado);
    
    int k = 0;
    int palavras = 0;
    
    while (frase[k] == ESPACO)
    	k++;
    	
    for (int i = k; i < tam; i++) {
    	if (frase[i] == ESPACO && isalnum(frase[i+1])) {
    		palavras++;
		}	
	}
    palavras++;	
    
    printf("A frase %s possui %d palavras", resultado, palavras);

    return 0;
}
