#include <stdio.h>
int main(){
    float a, b, c, ar, pe;
    scanf("%f %f %f", &a, &b, &c);
    if((a<b+c)&&(b<a+c)&&(c<a+b)){
        pe = a+b+c;
        printf("Perimetro = %.1f\n",pe);
    }
    else{
        ar = ((a+b)*c)/2;
        printf("Area = %.1f\n",ar);
    }
    return 0;
}