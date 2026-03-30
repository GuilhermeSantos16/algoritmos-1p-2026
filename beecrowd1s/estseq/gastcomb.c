#include <stdio.h>
int main(){
    int th, vm;
    float d, l;
    scanf("%d %d", &th, &vm);
    d = th*vm;
    l = d/12;
    printf("%.3f\n",l);
    return 0;
}