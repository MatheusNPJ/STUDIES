#include <stdio.h>
#include <string.h>
#include <locale.h>

//CRIANDO UMA FUNÇÃO(DECLARANDO E UTILIZANDO FUNÇÕES).


//AQUI EU CRIO A FUNÇÃO. 
float maior(float num1, float num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){
    float x, y, m;
    
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("Insira mais um valor:\n");
    scanf("%f", &y);
    
    //AQUI EU USO A FUNÇÃO QUE CRIEI. 
    m = maior(x, y);
    printf("Maior: %.2f\n", m);
}