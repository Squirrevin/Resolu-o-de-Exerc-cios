#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int contagem1[26] = {0};
    int contagem2[26] = {0};  
    int i;

    printf("Digite a primeira cadeia de caracteres: \n");
    fgets(str1, 100, stdin);
    printf("Digite a segunda cadeia de caracteres: \n");
    fgets(str2, 100, stdin);

    if (strlen(str1) != strlen(str2)) {
        printf("As cadeias '%s' e '%s' nao sao permutacoes uma da outra\n", str1, str2);
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        contagem1[str1[i] - 'a']++;
        contagem2[str2[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (contagem1[i] != contagem2[i]) {
            printf("As cadeias '%s' e '%s' nao sao permutacoes uma da outra\n", str1, str2);
            return 0;
        }
    }

    printf("As cadeias '%s' e '%s' sao permutacoes uma da outra\n", str1, str2);

    return 0;
}