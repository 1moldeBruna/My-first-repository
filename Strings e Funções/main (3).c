#include <stdio.h>
#include <stdlib.h>

/*1. Crie uma função em C, chamada Maior(), que recebe 2 números e retorna qual deles é o maior.

1.1.Crie um programa que deve solicitar na tela 4 números.

O programa deve descobrir qual é o maior dos 4 números informados e imprimir o resultado.

Detalhe: Para identificar qual é o maior número, SÓ PODE SER UTILIZADA A FUNÇÃO Maior().*/


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


