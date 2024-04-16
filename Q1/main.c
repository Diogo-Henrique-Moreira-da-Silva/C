#include <stdio.h>

void calcular_media(float nt1, float nt2, float nt3, char l) {
    float med;
    if (l=='A') {
        med=(nt1+nt2+nt3);
    } else if (l=='P') {
        float p1=5, p2=3, p3=2;
        med=(p1*nt1+p2*nt2+p3*nt3)/(p1+p2+p3);
    } else {
        printf("Letra invalida. Escolha 'A' para media aritmetica ou 'P' para media ponderada.\n");
        return;
    }
    printf("Media: %.2f\n",med);
}

int main() {
    int n;
    printf("Digite o numero de alunos: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        float nt1, nt2, nt3;
        printf("Digite as notas do aluno %d: \n", i + 1);
        scanf("%f %f %f", &nt1, &nt2, &nt3);

        char l;
        printf("Digite 'A' para media aritmetica ou 'P' para media ponderada: \n");
        scanf(" %c", &l);

        calcular_media(nt1, nt2, nt3, l);
    }

    return 0;
}
