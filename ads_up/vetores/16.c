#include <stdio.h>
#include <locale.h>

int main(){

    float menor, maior, num;

    do
    {
        printf("digite: \n");
        scanf("%f", &num);

        menor = maior = num;

        if(num <= menor && menor != 0)
        {
            menor = num;
        }

    }while(num > 0);

    printf("%f\n", menor);

    return 0;
}
