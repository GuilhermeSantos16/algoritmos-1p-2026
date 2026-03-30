#include <stdio.h>
int main(){
    int n, notas, q, resto;
    scanf("%d", &n);
    printf("%d\n",n);
    notas = 100;
    q = n / notas;
    resto = n % notas;
    printf("%d nota(s) de R$ 100,00\n",q);
    notas = 50;
    q = resto / notas;
    resto = resto % notas;
    printf("%d nota(s) de R$ 50,00\n",q);
    notas = 20;
    q = resto / notas;
    resto = resto % notas;
    printf("%d nota(s) de R$ 20,00\n",q);
    notas = 10;
    q = resto / notas;
    resto = resto % notas;
    printf("%d nota(s) de R$ 10,00\n",q);
    notas = 5;
    q = resto / notas;
    resto = resto % notas;
    printf("%d nota(s) de R$ 5,00\n",q);
    notas = 2;
    q = resto / notas;
    resto = resto % notas;
    printf("%d nota(s) de R$ 2,00\n",q);
    notas = 1;
    q = resto / notas;
    resto = resto % notas;
    printf("%d nota(s) de R$ 1,00\n",q);
    return 0;
}