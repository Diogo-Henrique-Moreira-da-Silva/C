#include <stdio.h>
#include <stdlib.h>

int main()
{   int v=0, ma=0, jo=0, nu=0,p,cn=0;
    while(v>=0){
    printf("Qual o seu voto: 1.JOAO/2.MARIA/3.NULO\n");
    scanf("%d",&v);
    if(v==1){jo++;}
    if(v==2){ma++;}
    if(v==3){nu++;}
    if(v>=0){cn++;}
    }
    p=(nu*100)/cn;
    printf("numero de votos de joao: %d;\n numero de votos de maria:%d\n", jo,ma);
    printf("numero de votos nulos:%d\n", nu);
    printf("porcentagem de votos nulos:%d porcento\n", p);
    if(jo>ma&&jo>nu){printf("Joao e o vencedor\n");}
    if(ma>jo&&ma>nu){printf("Maria e a vencedoran");}
    return 0;
}
