#include<cs50.h>
#include<stdio.h>

//ESCREVA UM ALGORÍTIMO QUE MOSTRE O RESULTADO DA SÉRIE 1/100 +2/99 + 3/98...+100/1

int main(){

    float numerador = 1;
    float denominador = 100;
    float soma = 0;

    for(int i = 0; i < 100; i++){
        soma += numerador / denominador;
        numerador++;
        denominador--;
    }
    printf("%.2f\n", soma);

    return 0;
}
