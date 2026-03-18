#include <stdio.h>
void main(){
    const int P1=4, P2=3, P3=2, P4=1, SP=P1+P2+P3+P4;
    float N1,N2,N3,N4,MP;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    MP=((P1*N1)+(P2*N2)+(P3*N3)+(P4*N4))/SP;
    printf("Média Ponderada: %.1f\n",MP);
}