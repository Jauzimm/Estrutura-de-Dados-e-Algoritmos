#include <stdio.h>

double calc(double valor1, double valor2, int operecao) {
    double resultado;
    printf("Digite o primeiro valor:");
    scanf("%lf", &valor1);
    printf("Digete o segundo valor:");
    scanf("%lf", &valor2);
    switch (operecao)
    {
    case 1:
        resultado = valor1 + valor2;
        printf("Seu resultado é: %.2lf\n", resultado);
        break;
    case 2:
        resultado = valor1 - valor2;
        printf("Seu resultado é: %.2lf\n", resultado);
        break;
    case 3:
        resultado = valor1 * valor2;
        printf("Seu resultado é: %.2lf\n", resultado);
        break;
    case 4:
        resultado = valor1 / valor2;
        printf("Seu resultado é: %.2lf\n", resultado);
        break;
        
    default:
        printf("Entrada invalida\n");
        break;
    }
}

int main () {

    double num1, num2, resultado;
    int operacao, opcao;
    char cont;
    do
    {    
        printf("Bem-vindo a calculadora pior que as outras\n");
        printf("Selecione a operação que deseja realizar\n");
        printf("Aperte 1 para ( + ) adição \n");
        printf("Aperte 2 para ( - ) subtração \n");
        printf("Aperte 3 para ( * ) multiplicação \n");
        printf("Aperte 4 para ( / ) divisão \n");
        scanf("%d", &opcao);


        if (opcao >= 1 && opcao <= 4) {
            double resultado = calc(num1, num2, opcao);
        } else {
            printf("Resultado invalido.\n");
        }
        
        printf("Deseja continuar?\n");
        printf("Digite | n | para não, e | s | para sim\n");
        scanf(" %c", &cont);
    } while ( cont == 'S' || cont == 's');

    printf("PROGRAMA FINALIZADO. OBRIGADO.\n\n");
    return 0;
}