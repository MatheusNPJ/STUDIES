#include <stdio.h>
#include <string.h>
#include <locale.h>

//CONCATENANDO STRINGS.

//Declarando uma constante.
#define N 20

int main(){
    setlocale(LC_ALL, "Portuguese");

    char s1[N] = {"Lógica de"};
    char s2[N] = {" Programação"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str1: %s\n", s2);

    strcat(s1, s2);

    printf("Depois de strcat:\n");
    puts(s1);

}