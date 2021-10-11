#include <stdio.h>
#include <stdlib.h>

/*2.  Um professor fez 3 provas durante um semestre mas s� vai levar em conta a maior das m�dias, calculadas com duas ou tr�s notas. Voc� deve criar uma fun��o chamada Media(), que receba o valor das 3 notas, e calcule a m�dia simples das notas que tiverem valores positivos, e retorne essa m�dia calculada.

Para calcular a m�dia com apenas 2 notas, informar um n�mero negativo no terceiro par�metro.

No programa principal, (main) mostre como seria a m�dia com essas 3 provas, a m�dia com as 2 notas mais altas, bem como sua nota mais alta e sua nota mais baixa.

Para descobrir a nota mais alta, utilize a fun��o Maior() que foi utilizada no exerc�cio 1, acima.
*/
//calcular a media com as tres notas;
//calcular a m�dia com as duas notas mais altas;
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

    //descubro qual � os valores maiores entre as 3 notas
    maior1 = Maior(nota1, nota2);
    maior2 = Maior(maior1, nota3);

    //descubro qual � a menor nota digitada
    menor1 = Menor(nota1, nota2);
    menor2 = Menor(menor1, nota3);

    //media entre as 2 notas maiores
    media2 = Media_2(maior1, maior2);

    printf("M�dia com as 3 notas informadas = %0.1f", media);
    printf("\nM�dia com as 2 notas mais altas = %0.1f", media2);
    printf("\nMaior nota = %f", maior2);
    printf("\nMenor nota = %f", menor2);

    return 0;
}



