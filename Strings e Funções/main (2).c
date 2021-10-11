#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//8. Faça um programa que receba uma palavra e a imprima de tras-para-frente.

int main(){
    int i, tam;
    char p[20];

    printf("Digite uma palavra: ");
    scanf("%s",p);

    tam = strlen(p);

    for(i=tam; i>=0; i--){
        printf("%c", p[i]);
    }

    return 0;

}
