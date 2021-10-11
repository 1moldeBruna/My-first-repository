#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*3. Crie uma função em C chamada Sorteio(). Essa função retorna, através de sorteio (utilizando um número randômico, com a função rand() ) , um número entre 1 e 10.

3.3.Crie um programa que faça a chamada dessa função por 100 vezes.

Conte quantas vezes cada um dos 10 números foi sorteado e ao final, imprima o resultado dos sorteios.
*/
//chamar essa função 100x
//contar quantas vezes cada número foi sorteado

//Função sorteio
int Sorteio(int x){
            srand (time(NULL)); // inicializa o gerador de valores aleátorios
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
        printf("O número %d foi sorteado: %d vezes\n", sorteio[i], v[i]);
    }
    return 0;
}

//ta feito, mas funciona errado e ainda não consegui destravar minha mente :(

