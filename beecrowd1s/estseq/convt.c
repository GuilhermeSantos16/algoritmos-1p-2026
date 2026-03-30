#include <stdio.h>
int main(){
    int ts, s, m, h, resto;
    scanf("%d", &ts);
    h = ts /3600;
    resto = ts % 3600;
    m = resto/60;
    resto = ts % 60;
    s = resto;
    printf("%d:%d:%d\n",h ,m, s);
    return 0;
}