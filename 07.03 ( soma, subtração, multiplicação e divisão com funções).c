//Crie funções em linguagem C que receba 2 números e
//retorne a soma, subtração, divisão e a multiplicação destes
//dois números informados.
//Obs.: Crie uma função para cada operação.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somar (float n1, float n2){
	float soma;
	soma = n1 + n2;
	return soma;
}

float subtrair (float n1, float n2){
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
	
	float primeiroNumero , segundoNumero;
	float soma, subtracao, multiplicacao, divisao;
	
	printf("Digite o primeiro número:  ");
	scanf("%f", &primeiroNumero);
	
	printf("Digite o segundo número:  ");
	scanf("%f", &segundoNumero);
	
	soma = somar(primeiroNumero, segundoNumero);
	subtracao = subtrair(primeiroNumero, segundoNumero);
	multiplicacao = multiplicar(primeiroNumero, segundoNumero);
	divisao = dividir(primeiroNumero, segundoNumero);
	
	
	printf("\n Soma : %.1f \n", soma);
	
	printf("\n Subtração : %.1f \n", subtracao);
	
	printf("\n Multiplicação : %.1f \n", multiplicacao);
	
	printf("\n Divisão : %.1f \n", divisao);
	
	return 0;
	
}
