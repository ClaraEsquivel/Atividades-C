#include <stdio.h>
#include <locale.h>

int main(){

//recebendo 5 n�meros inteiros do usu�rio inserindo no vetor.
	int vetor[5];
	int i;
	
	printf("Digite os elementos do vetor: \n");
	for(i = 0; i < 5; i++){
		printf("Elemento %d:", i + 1);
		scanf("%d", &vetor[i]);
	}
	
	//exibindo dados em um vetor em um la�o de repeti��o
	for(i = 0; i < 5; i++){
		printf("Elemento %d: %d\n", i + 1, vetor[i]);
	}
	
	return 0;
}
