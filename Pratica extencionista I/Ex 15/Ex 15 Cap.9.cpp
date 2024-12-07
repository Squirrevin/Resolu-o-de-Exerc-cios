#include <stdio.h>
#include <string.h>

void substituir_algarismo_por_extenso(char *frase) {
    char* numeros[] = {"zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] >= '0' && frase[i] <= '9') {
            int digito = frase[i] - '0';
            printf("%s ", numeros[digito]);
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
    
    substituir_algarismo_por_extenso(frase);

    return 0;
}
