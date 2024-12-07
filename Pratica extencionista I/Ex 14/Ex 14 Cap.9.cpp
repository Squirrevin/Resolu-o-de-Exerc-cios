#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    
    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);
    
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            
            frase[i] = toupper(frase[i]);
        }
        else if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z')) {
            
            frase[i] = tolower(frase[i]);
        }
    }
    
    printf("Frase alterada: %s\n", frase);
    
    return 0;
}
