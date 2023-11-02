#include <stdio.h>
#include <string.h>
#include <locale.h>

//PARA ALTERAR CONTEÚDO DENTRO DE STRING.

//Declarando uma constante.
#define N 20

int main(){
    setlocale(LC_ALL, "Portuguese");

    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    //ATRIBUI O VALOR DA STRING ORIGEM PARA A STRING DESTINO.
    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

}