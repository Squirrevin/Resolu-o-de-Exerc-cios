#include <stdio.h>
#include <string.h>

int main() {
    char cadeia[100], nova_cadeia[300];
    int num_rep;

    printf("Digite uma cadeia de caracteres: \n");
    fgets(cadeia, 100, stdin);
    
    cadeia[strcspn(cadeia, "\n")] = '\0';

    printf("Digite o numero de repeticoes (limite de 5): \n");
    scanf("%d", &num_rep);

    if (num_rep < 1 || num_rep > 5) {
        printf("O numero de repeticoes deve estar entre 1 e 5.\n");
        return 0;
    }

    for (int i = 0; i < num_rep; i++) {
        strcat(nova_cadeia, cadeia);
        if (i < num_rep - 1) {
            strcat(nova_cadeia, " ");
        }
    }

    printf("Nova cadeia: %s\n", nova_cadeia);

    return 0;
}
