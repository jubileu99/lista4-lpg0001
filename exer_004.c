#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(char *string, char *aux){
    int i,tam = strlen(string)-1;
    for(i = 0; i < strlen(string); i++){
        aux[i] = string[tam];
        tam--;
    }
    aux[i] = '\0';
}

int verifica(char *string, char *aux){
    int cont = 0,tam = strlen(string);
    for(int i = 0; i < tam; i++){
        if(string[i] == aux[i]){
            cont++;
        }
    }
    if(cont == tam)
        return 1;
    else
        return 0;
}

int main(){

    char string[20];
    char aux[20];

    scanf("%s",string);

    troca(string,aux);
    verifica(string,aux);

    if(verifica(string,aux))
        printf("Palindromo\n");
    else
        printf("Não é Palindromo\n");

    return 0;
}