#include <stdio.h>
#include <math.h>
void main(){
    float x1, x2, y1, y2, distancia;
    scanf("%f %f",&x2 ,&x1);
    scanf("%f %f",&y2 ,&y1);
    distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distância entre dois pontos: %.2f\n",distancia);
}