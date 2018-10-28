#include <stdio.h>
#include <string.h>


void maiuscula(char *string){
    int i;
    for(i = 0; i < strlen(string); i++){
        if(string[i] >= 65 || string[i] <= 90){
            string[i] -= 32;
        }
    }

}

void main(){

    char string[200];
    scanf("%s",string);
    maiuscula(string);
    printf("%s",string);

}