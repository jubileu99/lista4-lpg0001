#include <stdio.h>
#include <stdlib.h>


int tamanho(char *v);
void concatena(char *s1,char *s2);

void main(){
    char string1[20];
    char string2[20];

    scanf("%s",string1);
    scanf("%s",string2);

    printf("tam = %d \n",tamanho(string1));

    concatena(string1,string2);

    printf("%s\n",string1);

}

int tamanho(char *v){
    int i;
    for(i = 0; v[i] != '\0';i++);
    return i;
}

void concatena(char *s1,char *s2){
    int t1 = tamanho(s1);
    int i;

    for(i = 0; s2[i] != '\0';i++){
        s1[t1] = s2[i];
        t1++;
    }
    s1[t1] = '\0';
}