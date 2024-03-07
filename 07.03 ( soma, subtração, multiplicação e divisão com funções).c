//Crie funções em linguagem C que receba 2 números e
//retorne a soma, subtração, divisão e a multiplicação destes
//dois números informados.
//Obs.: Crie uma função para cada operação.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar (int n1, int n2){
	int soma;
	soma = n1 + n2;
	return soma;
}

int subtrair (int n1, int n2){
	int subtracao;
	subtracao = n1 - n2;
	return subtracao;
}

float multiplicar (float n1, float n2){
	float multiplicacao;
	multiplicacao = n1 * n2;
	return multiplicacao;
}

float dividir (float n1, float n2){
	float divisao;
	divisao = n1 / n2;
	return divisao;
}

int main(){
	setlocale(LC_ALL, "");
	
	int primeiroNumero , segundoNumero;
	
	printf("Digite o primeiro número:  ");
	scanf("%i", &primeiroNumero);
	
	printf("Digite o segundo número:  ");
	scanf("%i", &segundoNumero);
	
	soma = somar(primeiroNumero, segundoNumero);
	subtracao = subtrair(primeiroNumero, segundoNumero);
	multiplicacao = multiplicar(primeiroNumero, segundoNumero);
	divisao = dividir(primeiroNumero, segundoNumero);
	
	printf("\n Soma : %i \n", soma);
	
	printf("\n Subtração : \n", subtracao);
	
	printf("\n Multiplicação : %f \n", multiplicacao);
	
	printf("Divisão : %f \n", divisao);
	
	return 0
	
}
