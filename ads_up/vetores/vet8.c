#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, num[5];

    for(i = 0; i < 5; i++){
        printf("Digite uma sequência de números distintos: ");
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 4; i++){

        for(int j = i + 1; j < 5; j++){

            if(num[i] == num[j])
            {
                printf("não deu good");
                return 1;
            }
        }
    }

    printf("deu boa!");
    return 0;
}
