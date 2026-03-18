#include <stdio.h>
void main(){
    int a,b,c;
    scanf("%d %d",&a ,&b);
    c=a;
    a=b;
    b=c;
    printf("Troca: %d, %d\n",a ,b);
}