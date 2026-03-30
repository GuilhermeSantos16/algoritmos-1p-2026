#include <stdio.h>
int main(){
    int l, q;
    const float CQ = 4.00, XS = 4.50, XB = 5.00, TS = 2.00, RF = 1.50;
    float t;
    scanf("%d %d", &l, &q);
    if(l==1){
        t = CQ*q;
        printf("Total: R$ %.2f\n",t);
    }
    else if(l==2){
        t = XS*q;
        printf("Total: R$ %.2f\n",t);
    }
    else if(l==3){
        t = XB*q;
        printf("Total: R$ %.2f\n",t);
    }
    else if(l==4){
        t = TS*q;
        printf("Total: R$ %.2f\n",t);
    }
    else {
        t = RF*q;
        printf("Total: R$ %.2f\n",t);
    }
    return 0;
}