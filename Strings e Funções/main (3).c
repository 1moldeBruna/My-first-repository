#include <stdio.h>
#include <stdlib.h>

/*1. Crie uma fun��o em C, chamada Maior(), que recebe 2 n�meros e retorna qual deles � o maior.

1.1.Crie um programa que deve solicitar na tela 4 n�meros.

O programa deve descobrir qual � o maior dos 4 n�meros informados e imprimir o resultado.

Detalhe: Para identificar qual � o maior n�mero, S� PODE SER UTILIZADA A FUN��O Maior().*/


int Maior(int n1, int n2){
    if(n1 > n2)
        return n1;
    else
        return n2;
}

int main()
{
    int v1, v2, v3, v4, maior1, maior2, maior3;

    printf("\nInforme 4 valores: \n");
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);
    scanf("%d", &v4);

    maior1 = Maior(v1, v2);

    maior2 = Maior(v3, v4);

    maior3 = Maior(maior1, maior2);

    printf("\n Maior valor = %d", maior3);
}


