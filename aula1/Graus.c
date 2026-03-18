#include <stdio.h>
void main(){
    const int A=32;
    float grausc, grausf;
    scanf("%f",&grausf);
    grausc=(5*(grausf-A))/9;
    printf("Graus Celsius: %.1f\n",grausc);
}