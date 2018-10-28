#include <stdio.h>
#include <string.h>



char *apaga(char *string,char car){
    int tam = 0,i;

    for(i = 0; string[i] != '\0' && string[i] != car; i++);

    int *p1 = malloc(sizeof(char)*i);

    for(int x = 0; x < i && string[x] != car; x++){
        
    }

}

void main(){

    char string[200];
    char car;

    char *p = apaga(string);

    scanf("%s",string);
    scanf("%c",&car);

}