#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*3. Crie uma fun��o em C chamada Sorteio(). Essa fun��o retorna, atrav�s de sorteio (utilizando um n�mero rand�mico, com a fun��o rand() ) , um n�mero entre 1 e 10.

3.3.Crie um programa que fa�a a chamada dessa fun��o por 100 vezes.

Conte quantas vezes cada um dos 10 n�meros foi sorteado e ao final, imprima o resultado dos sorteios.
*/
//chamar essa fun��o 100x
//contar quantas vezes cada n�mero foi sorteado

//Fun��o sorteio
int Sorteio(int x){
            srand (time(NULL)); // inicializa o gerador de valores ale�torios
            x = 1 + rand() %9;
    return x;
}

int main (){

    int sorteio[11], v[11], i, x=0, j;

     for(i=0; i<11; i++){
        v[i] = 0;
     }

     do{

        for(i=0; i<10; i++){
        sorteio[i] = Sorteio(j);
         v[i]++;
        }
        sorteio[i]=v[i];
       // v[i]++;
        x++;
        }while(x<10);

    for(i = 1; i<10; i++){
        printf("O n�mero %d foi sorteado: %d vezes\n", sorteio[i], v[i]);
    }
    return 0;
}

//ta feito, mas funciona errado e ainda n�o consegui destravar minha mente :(

