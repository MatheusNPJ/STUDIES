#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 3

//CRIANDO UM VETOR DE STRUCTS (MUITO BOM).

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
//CRIANDO A VARIÁVEL QUE OS VALORES SEJAM CONDIZENTES AOS TIPOS DOS CAMPOS CRIADOS NA STRUCT PESSOA. EX:
    tipo_pessoa lista[TAM];
    int i;

    for(i = 0; i < TAM; i++){
        printf("Insira os dados (%d):\n", i+1);
        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
    }
}

