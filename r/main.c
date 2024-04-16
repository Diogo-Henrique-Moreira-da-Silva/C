#include <stdio.h>
#include <stdlib.h>

int main()
{   int n, fat, som;
    fat=1;
    for(n=1; n<=8; n++){
        printf("numero: %d\n",n);
        fat=fat*n;
        printf("fatoral: %d\n",fat);
        som=som+fat;
    }
    printf("A soma dos fatoriais de 1 a 8 é: %d\n", som);

    return 0;
}
