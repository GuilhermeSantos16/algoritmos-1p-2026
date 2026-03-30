#include <stdio.h>
int main(){
    int a, b, r;
    scanf("%d %d",&a ,&b);
    r = b % a;
    if((b%a)==0 ||(a%b)==0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    return 0;
}