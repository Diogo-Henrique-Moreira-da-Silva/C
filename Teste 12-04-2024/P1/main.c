#include <stdlib.h>
#include <stdio.h>

void analisar_numeros() {
    int n, cn = 0, m2 = 0, m3 = 0;
    int nn = 0, np = 0;
    int flag = 1;

    printf("Digite a serie de numeros (digite 0 para encerrar):\n");
    while (flag) {
        scanf("%d", &n);
        if (n!=0) {cn++;

            if (n%2==0)
                m2++;

            if (n%3==0)
                m3++;

            if (n<0)
                nn++;

            else if (n>0){
                np++;}}

                else {flag = 0;}
    }

    printf("Quantidade total de numeros lidos: %d\n", cn);
    printf("Quantidade de multiplos de 2: %d\n", m2);
    printf("Quantidade de multiplos de 3: %d\n", m3);
    printf("Quantidade de numeros negativos: %d\n", nn);
    printf("Quantidade de numeros positivos: %d\n", np);
}

int main() {
    analisar_numeros();
    return 0;
}
