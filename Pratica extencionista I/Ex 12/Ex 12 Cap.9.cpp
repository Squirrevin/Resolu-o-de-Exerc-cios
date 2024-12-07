#include <stdio.h>

int main() {
    int dia, mes, ano;

    char* meses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    printf("Digite uma data DD/MM/AAAA: \n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%02d/%s/%04d\n", dia, meses[mes - 1], ano);

    return 0;
}
