#include <stdio.h>

int main (){

    //APRENDA A REALIZAR CÁLCULOS.
    int A, B, soma, subtr, mult, divis ;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultados:\n");
    printf("Soma: %d \n", soma);
    printf("Subtração %d\n", subtr);
    printf("Multiplicação %d\n", mult);
    printf("Divisão %d\n", divis);
    
    //OPERADORES DE ATRIBUIÇÃO ARITIMÉTICA. 
    int dado = 10;
    printf("Dado antes do incremento: %d\n", dado);

    dado++;
    printf("Depois do incremento: %d.\n", dado);

    dado--;
    printf("Depois do decremento: %d.\n", dado);

    dado+= 3;
    printf("Depois do incremento em 3 unidades: %d.\n", dado);

    dado-= 2;
    printf("Depois do decremento em 2 unidades: %d.\n", dado);

    dado*= 10;
    printf("Depois de multiplicar em 10 unidades: %d.\n", dado);

    dado/= 2;
    printf("Depois de dividir em 2 unidades: %d.\n", dado);
    return 0;
}