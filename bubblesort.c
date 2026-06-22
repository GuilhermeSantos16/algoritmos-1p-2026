#include <stdio.h>

const int ALUNOS=1000, TAM_NOME=100, TAM_RES=20;

void copiar_string(char *string1, char *string2){
    int i;
    for(i = 0; string2[i] != '\0'; i++){
        string1[i] = string2[i];
    }
    string1[i] = '\0';       
}
int main(){
    int cod[ALUNOS], aux_cod;
    char nome[ALUNOS][TAM_NOME],resultado[ALUNOS][TAM_RES], aux_res[TAM_RES], aux_nome[TAM_NOME];
    float nota1, nota2, media[ALUNOS], aux_media;

    for(int x=0;x<ALUNOS;x++){
        scanf(" %d,%[^,],%f,%f", &cod[x], nome[x], &nota1, &nota2);
        media[x]=(nota1 + nota2) / 2.0;
        if(media[x]>=6.0){
            copiar_string(resultado[x], "Aprovado");
        }
        else{
            copiar_string(resultado[x], "Reprovado");
        }
    }
    for(int x=0;x<ALUNOS;x++){
        for(int j=0;j<ALUNOS-x-1;j++){
            if(media[j]>media[j+1]){
                aux_cod=cod[j];
                cod[j]=cod[j+1];
                cod[j+1]=aux_cod;
                
                copiar_string(aux_nome,nome[j]);
                copiar_string(nome[j],nome[j+1]);
                copiar_string(nome[j+1],aux_nome);
                
                aux_media=media[j];
                media[j]=media[j+1];
                media[j+1]=aux_media;
                
                copiar_string(aux_res,resultado[j]);
                copiar_string(resultado[j],resultado[j+1]);
                copiar_string(resultado[j+1],aux_res);
            }
        }
    }
    for(int x=0;x<ALUNOS;x++){
        if(media[x]<6){
            printf("%d,%s,%.2f,%s\n", cod[x], nome[x], media[x],resultado[x]);
        }
    }
    return 0;
}
