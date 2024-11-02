#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 3

//CRIANDO UM VETOR DE STRUCTS (MUITO BOM).

//COMPILE E ENTENDA. 

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
        scanf("%50s", &lista[i].nome);
        fflush(stdin);

        puts("Idade: ");
        scanf("%ds", &lista[i].idade);
        fflush(stdin);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }
    system("cls");//ESTE COMANDO ERA PARA APAGAR O QUE POR MIM FOI INSERIDO ATÉ O MOMENTO NESTE CÓDIGO, MAS NÃO FUNCIONOU.

    puts("Seus dados: \n");
    for(i = 0; i < TAM; i++){
        printf("-----------Pessoa %d -----------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %.2f\n", lista[i].peso);
    }
    printf("-------------------------------------\n");
}

