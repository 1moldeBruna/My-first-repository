#include <stdio.h>
#include <stdlib.h>

/*2.  Um professor fez 3 provas durante um semestre mas só vai levar em conta a maior das médias, calculadas com duas ou três notas. Você deve criar uma função chamada Media(), que receba o valor das 3 notas, e calcule a média simples das notas que tiverem valores positivos, e retorne essa média calculada.

Para calcular a média com apenas 2 notas, informar um número negativo no terceiro parâmetro.

No programa principal, (main) mostre como seria a média com essas 3 provas, a média com as 2 notas mais altas, bem como sua nota mais alta e sua nota mais baixa.

Para descobrir a nota mais alta, utilize a função Maior() que foi utilizada no exercício 1, acima.
*/
//calcular a media com as tres notas;
//calcular a média com as duas notas mais altas;
//mostrar a nota mais alta e a mais baixa
float Media(float n1, float n2, float n3){
    float operacao = (n1+n2+n3) / 3;
    return operacao;

}

float Media_2(float n1, float n2){
    float operacao = (n1+n2) / 2;
    return operacao;

}

float Maior(float n1, float n2){
    if(n1 > n2)
        return n1;
    else
        return n2;
}

float Menor(float n1, float n2){
    if(n1 < n2)
        return n1;
    else
        return n2;
}

int main()
{
    float nota1, nota2, nota3;
    float media, media2, maior1, maior2, menor1, menor2;

    printf("Digite as 3 notas:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    //media com as 3 notas
    media = Media(nota1, nota2, nota3);

    //descubro qual é os valores maiores entre as 3 notas
    maior1 = Maior(nota1, nota2);
    maior2 = Maior(maior1, nota3);

    //descubro qual é a menor nota digitada
    menor1 = Menor(nota1, nota2);
    menor2 = Menor(menor1, nota3);

    //media entre as 2 notas maiores
    media2 = Media_2(maior1, maior2);

    printf("Média com as 3 notas informadas = %0.1f", media);
    printf("\nMédia com as 2 notas mais altas = %0.1f", media2);
    printf("\nMaior nota = %f", maior2);
    printf("\nMenor nota = %f", menor2);

    return 0;
}



