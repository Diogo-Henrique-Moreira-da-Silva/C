#include <stdio.h>
#include <stdlib.h>

float celsius_para_fahrenheit(float c) {
    return (c*9/5)+32;
}

float fahrenheit_para_celsius(float f) {
    return (f-32)*5/9;
}

int main() {
    int q;
    float temp;

    printf("Escolha a opcao desejada:\n");
    printf("1. Converter de celsius para Fahrenheit\n");
    printf("2. Converter de Fahrenheit para celsius\n");
    scanf("%d", &q);

    switch (q) {
        case 1:
            printf("Digite a temperatura em graus celsius:");
            scanf("%f",&temp);
            printf("Esse valor equivale a %.2f Fahrenheit.\n", celsius_para_fahrenheit(temp));
            break;
        case 2:
            printf("Digite a temperatura em graus Fahrenheit: ");
            scanf("%f",&temp);
            printf("Esse valor equivalem a %.2f graus celsius.\n", fahrenheit_para_celsius(temp));
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
