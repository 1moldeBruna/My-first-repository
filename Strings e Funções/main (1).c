#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*9. Faça um programa que receba do usuario uma string. O programa imprime a string sem
suas vogais.*/

int main()
{
    char p[20], vogal[10] = "aeiouAEIOU";
    int i, j, tamanho;

    printf("Digite uma palavra: \n");
    scanf("%s", p);

    tamanho = strlen(p);

    for(i=0; i<tamanho; i++){
            for(j=0; j<10; j++){
                if(p[i]==vogal[j]){
                        p[i] = 'x';

                }
            }
        }
    printf("%s", p);

    return 0;
}
