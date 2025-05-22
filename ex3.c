#include <stdio.h>
#include <string.h>

void inverter_string(char *ptrPalavra){
    int tamanho = strlen(ptrPalavra);
    char *fim = ptrPalavra + tamanho - 1;

    for(char *inicio = ptrPalavra; inicio < fim; inicio++, fim--){
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;
    }
    printf("Palavra invertida: %s\n", ptrPalavra);
}

int main(void){
    char palavra[21];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    inverter_string(palavra);
    
    return 0;
}