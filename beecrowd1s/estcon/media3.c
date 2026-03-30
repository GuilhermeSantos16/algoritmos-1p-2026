#include <stdio.h>
int main(){
    const int P1=2, P2=3, P3=4, P4=1, SP=P1+P2+P3+P4;
    float n1, n2, n3, n4, ne, mp, mf;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    mp = ((n1*P1)+(n2*P2)+(n3*P3)+(n4*P4))/SP;
    if(mp>=7.0){
        printf("Media: %.1f\n",mp);
        printf("Aluno aprovado.\n");
    }
    else if(mp<5.0){
        printf("Media: %.1f\n",mp);
        printf("Aluno reprovado.\n");
    }
    else{
        scanf("%f", &ne);
        printf("Media: %.1f\n",mp);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",ne);
        mf = (ne+mp)/2;
        if(mf>=5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",mf);
    }
    return 0;
}