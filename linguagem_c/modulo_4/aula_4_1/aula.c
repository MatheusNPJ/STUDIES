#include <stdio.h>

//APLICANDO UMA CONDIÇÃO.
int main(){

    float m;
    
    printf("Insira a nota:\n");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aprovado.(a)!\n");
    }else{
        printf("Reprovado(a)!.");
    }

}