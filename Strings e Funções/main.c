#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*13. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

int main()
{
	char frase[100];
	char caracter;
	int i=0, tamanho;

	//obtenção da frase
	printf("Digite uma frase:\n");
	do {

		caracter = getchar(); // caracter vai ser igual ao que a função getchar capturar na minha linha de comando
		frase[i] = caracter;
		++i;

	}while(caracter !='\n');

	tamanho = strlen(frase);
	for(i=0; i<tamanho; i++){
        if(frase[i]==' '){
            frase[i]=frase[i+1];
        }
	}
	printf("\nA frase digitada foi: %s\n", frase);//isso eu uso para mostrar a frase que o usuário digitou.


    return 0;
}
