//Elabore um algoritmo para receber dois inteiros como entrada do
//teclado e escreva na tela:
//A média, a soma, o produto, o menor valor e o maior valor.
//Além disso, verifique se os números informados pelo usuário são iguais.
//Usando uma linha para cada resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho (){
	system ("cls || clear");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL, "");
	
	int numeroInteiro1, numeroInteiro2;
	float soma, produto, media, menorValor, maiorValor;
	
	cabecalho();
	printf("Digite o primeiro número:   ");
	scanf("%i", &numeroInteiro1);
	
	cabecalho();
	printf("Digite o segundo número:  ");
	scanf("%i", &numeroInteiro2);
	
	soma = numeroInteiro1 + numeroInteiro2;
	produto = numeroInteiro1 * numeroInteiro2;
	media = soma / 2;
	
	if (numeroInteiro1 > numeroInteiro2){
		maiorValor = numeroInteiro1;
		menorValor = numeroInteiro2;
	} else{
		maiorValor = numeroInteiro2;
		menorValor = numeroInteiro1;
	}
	
	printf("==== DADOS SOLICITADOS ====");
	printf("\n Primeiro número inteiro: %i \n", numeroInteiro1);
	printf("\n Segundo número inteiro: %i \n", numeroInteiro2);
	printf("\n Soma: %.1f \n", soma);
	printf("\n Produto: %.1f \n", produto);
	printf("\n Média: %.1f \n", media);
	
		if (numeroInteiro1 == numeroInteiro2){
		printf("\n Os números são iguais. \n");
	}
	
	printf("\n Maior valor: %.1f \n", maiorValor);
	printf("\n Menor valor: %.1f \n", menorValor);
	

	
	return 0;
}
