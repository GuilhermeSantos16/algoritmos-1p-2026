#include <stdio.h>
#include <math.h>
const float PI=3.14;
void main(){
    float raio,area;
    scanf("%f",&raio);
    area=PI*pow(raio,2);
    printf("Área: %.2f\n",area);
}