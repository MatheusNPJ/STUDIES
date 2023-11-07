#include <stdio.h>

//PARÂMETROS DE FUNÇÃO COM VETORES.


//ABAIXO MOSTRANDO AS MANEIRAS QUE PODEMOS DECLARAR UMA FUNÇÃO QUE PASSAM VETORES COMO PARÂMETROS. 
//EX DE SINTAXE E PARÂMETRO PARA VETOR 1° OPÇÃO.
void imprime1(int v[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

//EX DE SINTAXE E PARÂMETRO PARA VETOR 2° OPÇÃO.
void imprime2(int v[5]){
    int i;
    for (i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }
}

//EX DE SINTAXE E PARÂMETRO PARA VETOR 3° OPÇÃO.
void imprime3(int *v, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

//ABAIXO CRIANDO A FUNÇÃO PARA PODER CHAMAR AS FUNÇÕES CRIADAS ACIMA.

int main (){
    int vet[5] = {1, 2, 3, 4, 5};

    puts("Primeiro imprime:");
    imprime1(vet, 5); //COMO DECLARAR A FUNÇÃO COM VETORES COMO PARÂMETROS NA 1° OPÇÃO

    puts("\nSegundo imprime:");
    imprime2(vet); //COMO DECLARAR A FUNÇÃO COM VETORES COMO PARÂMETROS NA 2° OPÇÃO

    puts("\nTerceiro imprime:");
    imprime3(vet, 5);//COMO DECLARAR A FUNÇÃO COM VETORES COMO PARÂMETROS NA 3° OPÇÃO
    printf("\n");
}