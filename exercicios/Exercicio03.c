#include <stdio.h>
#include <stdlib.h>

float conversorFC(float valor) {
    valor = valor - 32;
    valor = valor / 1.8;
    return valor;
}

float conversorCF(float valor) {
    valor = valor * 1.8;
    valor = valor + 32;
    return valor;
}

int main () {

    char opcao;
    float valor, conversor;
    system("clear");
    printf("\nBem vindo ao conversor de temperatura 3000;\n");
    printf("Escolha uma das opções a baixo;\n");
    printf("[ C ] Fahrenheit para Celsius;\n");
    printf("[ F ] Celsius para Fahrenheit;\n");
    printf("[ S ] Para encerra o programa.\n");
    printf("Qual sera a escolha?: ");
    scanf("%c", &opcao);

    if ( opcao == 'C') {
        system("clear");
        printf("Fahrenheit ==> Celcius\n");
        printf("Digite o valor: ");
        scanf("%f", &valor);
        float conversor = conversorFC(valor);
        printf("[ %.2f° Graus ]\n", conversor);
    } else if ( opcao == 'F') {
        system("clear");
        printf("Celcius ==> Fahrenheit\n");
        printf("Digite o valor: ");
        scanf("%f", &valor);
        float conversor = conversorCF(valor);
        printf("[ %.2f° Fahrenheit]\n", conversor);
    } else if (opcao == 'S') {
        printf("Encerrando o programa.\n");
    } else {

    }

    return 0;
}