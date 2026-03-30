#include <stdio.h>
int main(){
    int d;
    float com, con;
    scanf("%d %f", &d, &com);
    con=d/com;
    printf("%.3f km/l\n",con);
    return 0;
}