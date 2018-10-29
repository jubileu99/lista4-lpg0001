#include <stdio.h>

int qtd(char *string,char car){

    int cont = 0;

    for(int i=0; string[i] != '\0';i++){
        if(string[i] == car){
            cont++;
        }
    }

    return cont;
}

void main(){
    char string[20];
    char car;

    scanf("%c",&car);
    scanf("%s",string);



    printf("%d\n",qtd(string,car));
}
