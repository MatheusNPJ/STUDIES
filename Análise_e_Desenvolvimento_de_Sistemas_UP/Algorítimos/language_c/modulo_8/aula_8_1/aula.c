#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

//APRENDENDO NA PRÁTICA STRUCTS (VETOR DE CAMPOS COM TIPOS DE DADOS DIFERENTES).

//DECLARANDO ELE.
struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

//RENOMEANDO.
typedef struct tipo_pessoa tipo_pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
//CRIANDO A VARIÁVEL QUE OS VALORES SEJAM CONDIZENTES AOS TIPOS DOS CAMPOS CRIADOS NA STRUCT PESSOA. EX:
tipo_pessoa pes = {0, 0.0, "Teste"};

printf("Início:\n");
printf("pes.idade: %d\n", pes.idade);
printf("pes.peso: %.2f\n", pes.peso);
printf("pes.nome: %s\n", pes.nome);

//ATRIBUINDO VALORES AOS CAMPOS.
pes.idade = 10;
pes.peso = 99.99;
strcpy(pes.nome, "Texto");

printf("\nAlterando os campos via código:\n");
printf("pes.idade %d\n", pes.idade);
printf("pes.peso: %.2f\n", pes.peso);
printf("pes.nome: %s\n", pes.nome);

//SOLICITANDO INSERÇÕES VIA TECLADO NOS CAMPOS DE TIPOS DIFERENTES DA VARIÁVEL "PES" QUE É UM VETOR STRUCT.
printf("\nInsira um número inteiro\n");
scanf("%d", &pes.idade);
printf("Insira um número real:\n");
scanf("%f", &pes.peso);
fflush(stdin);
printf("Insira uma palavra:\n");
/*PROFESSOR USA SCANF NO CASO ABAIXO, NO MEU CÓDIGO NÃO COMPILOU, 
E COM FGETS COMPILOU MAS FICA COM BUG, RESOLVI NÃO PERDER TEMPO NISSO.*/
fgets(pes.nome, TAM, stdin);

printf("\nAlterando com dados do usuário:\n");
printf("pes.idade: %d\n", pes.idade);
printf("pes.peso: %.2f\n", pes.peso);
printf("pes.nome: %s\n", pes.nome);

}
