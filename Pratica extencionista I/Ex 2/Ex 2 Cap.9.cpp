#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    
    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);
    
    char* palavra = strtok(frase, " ");

    while (palavra != NULL) {
	    printf("%s\n", palavra); 
        palavra = strtok(NULL, " "); 
    }
    
return 0;
}