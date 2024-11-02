#include <stdio.h>

//PROPTÓTIPOS DE FUNÇÃO.
//(declarando a função no main e colocando os parâmentros dela abaixo do main).

float maior(float num1, float num2);//PROTÓTIPO DA FUNÇÃO.

int main(){
    float x, y, m;
    printf("Insira um valor:\n");
    scanf("%f", &x);
    printf("Insira mais um valor:\n");
    scanf("%f", &y);
    
    //USO A FUNÇÃO AQUI.
    m = maior(x, y);

    printf("Maior: %.2f\n", m);
}

//ABAIXO A FUNÇÃO INTEIRA, ACIMA DO MAIN SÓ O PROTÓTIPO DELA.
float maior(float num1, float num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }        

}