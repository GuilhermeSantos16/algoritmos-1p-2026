#include <stdio.h>
int main(){
    float x;
    scanf("%f", &x);
    if(x<0 || x>100){
        printf("Fora de intervalo\n",x);
    }
    else if(x>=0 && x<=25){
        printf("Intervalo [0,25]\n",x);
    }
    else if(x>25 && x<=50){
        printf("Intervalo (25,50]\n",x);
    }
    else if(x>50 && x<=75){
        printf("Intervalo (50,75]\n",x);
    }
    else {
        printf("Intervalo (75,100]\n",x);
    }
    return 0;
}