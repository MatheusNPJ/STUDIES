#include<cs50.h>
#include<stdio.h>

//ESCREVA UM ALGORÍTIMO QUE ESCREVA OS 10 PRIMEIROS TERMOS DA SÉRIE 1, 3, 9, 27...

int main (){

    int num = 1;

    for(int i = 0; i < 10; i++){
        printf("%d\n", num);
        num = num * 3;
    }


return 0;
}
