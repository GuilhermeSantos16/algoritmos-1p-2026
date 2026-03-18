#include <stdio.h>
void main(){
    const float VALOR=10.5;
    float salario,horas;
    scanf("%f",&horas);
    salario=VALOR*horas;
    printf("Salário: %.2f\n",salario);
}