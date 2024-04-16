#include <stdio.h>
#include <stdlib.h>
void trieq(){printf("e um triangulo equilatero:\n");}
void trii(){printf("e um triagulo isoceles:\n");}
void tries(){printf("e um triagulo ecaleno:\n");}

int main()
{   float l1, l2, l3;
    int cn=1;
    while(cn==1){
    printf("Insira o valor de um dos lados:\n");
    scanf("%f",&l1);
    printf("Insira o valor de outro lado:\n");
    scanf("%f",&l2);
    printf("Insira o valor do ultimo lado\n");
    scanf("%f",&l3);
    if(l1<0||l2<0||l3<0){printf("NAO E UM VALOR DE UM TRIANGULO\n");}
    else{
    if(l1<l2+l3 && l2<l3+l1 && l3<l2+l1){
    if(l1==l2&&l2==l3){trieq();}
    if(l1==l2&&l2!=l3 || l2==l3&&l2!=l1){trii();}
    if(l1!=l2&&l2!=l3&&l3!=l2){tries();}}
    else {printf("\n\nEsses nao sao valores de um triangulo;\n\n");}
    }
    printf("deseja continuar? Se sim, pressione 1\n");
    scanf("%d",&cn);}

    return 0;
}
