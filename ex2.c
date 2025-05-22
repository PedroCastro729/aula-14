#include <stdio.h>
#include <string.h>

void palin(char *ptrPalavra) {
    int tamanho = strlen(ptrPalavra);
    char *fim = ptrPalavra + tamanho - 1;

    while(ptrPalavra < fim) {
        if(*ptrPalavra != *fim) {
            break;
        }
        ptrPalavra++;
        fim--;
    }

    if(ptrPalavra >= fim) {
        printf("Resultado: é um palíndromo!\n");
    } else {
        printf("Resultado: NÃO é!\n");
    }

    fim = ptrPalavra + tamanho - 1;

}

int main(void) {
    char palavra[11];
    int palindromo = 1;

    printf("Digite uma palavra de até 10 letras: ");
    scanf("%10s", palavra);

    palin(palavra);

    return 0;
}