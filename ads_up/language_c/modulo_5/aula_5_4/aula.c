#include <stdio.h>

//APRENDENDO BREAK E CONTINUE

int main(){

    int i;

    for(i=1; i <= 10; i++){

        if(i == 5){
            continue; //Se no lugar de "continue" estivesse o comando "break" o laço seria interrompido.
        }

        printf("%d ", i);
    }

}