#include<cs50.h>
#include<stdio.h>

//ESCREVA UM ALGORÍTIMO QUE MOSTRE O RESULTADO DOS PRIMEIROS 50 TERMOS
// 1000/1 - 997/2 + 994/3- 991/4 + ... Resultado: 685.30.

int main(){

    float numerador = 1000;
    float denominador = 1;
    float soma = 0;

    for(int i = 0; i < 50; i++){
        soma += numerador / denominador;
        numerador = numerador - 3;
        denominador++;
    }
    printf("%f\n", soma);

    return 0;
}
