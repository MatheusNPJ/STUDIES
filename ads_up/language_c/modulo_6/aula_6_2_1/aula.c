#include <stdio.h>

int main (){

    char s [10];

    printf("Digite algo (leitura pelo gets):\n");
    //GETS NAO CONTROLA TAMANHO DE LIMITE DE VETOR.
    gets(s);
    fflush(stdin);

    puts("Resultado: ");
    puts(s);
    puts("");

    printf("Digite algo (leitura pelo fgets):\n");
    //FGETS CONTROLA, SO IRA IMPRIMIR OS 10 CARACTERES.
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(s);

}