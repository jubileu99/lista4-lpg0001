#include <stdio.h>
#include <stdlib.h>

int tamanho(char *v){
    int i;
    for(i = 0; v[i] != '\0';i++);
    return i;
}

void main(){

    char string[20];

    scanf("%[^\n]s",string);

    printf("numero de caracteres = %d\n",tamanho(string));


}
