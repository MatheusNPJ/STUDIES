#include <stdio.h>

//ARGC E ARGV TREINANDO.

float maior (float num1, float num2);

int main(int argc, char *argv[]){
    
    int i;
    
    if(argc > 1){
        printf("Foram inseridos %d argumentos:\n", argc);
        for(i = 0; i < argc; i++){
            printf("%s\n", argv[i]);
        }
    }else{
            printf("Não foram inseridos argumentos no programa.\n");
        }
}