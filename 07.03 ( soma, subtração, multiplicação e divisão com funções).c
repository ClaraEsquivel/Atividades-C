//Crie fun��es em linguagem C que receba 2 n�meros e
//retorne a soma, subtra��o, divis�o e a multiplica��o destes
//dois n�meros informados.
//Obs.: Crie uma fun��o para cada opera��o.

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
	
	printf("Digite o primeiro n�mero:  ");
	scanf("%i", &primeiroNumero);
	
	printf("Digite o segundo n�mero:  ");
	scanf("%i", &segundoNumero);
	
	soma = somar(primeiroNumero, segundoNumero);
	subtracao = subtrair(primeiroNumero, segundoNumero);
	multiplicacao = multiplicar(primeiroNumero, segundoNumero);
	divisao = dividir(primeiroNumero, segundoNumero);
	
	printf("\n Soma : %i \n", soma);
	
	printf("\n Subtra��o : \n", subtracao);
	
	printf("\n Multiplica��o : %f \n", multiplicacao);
	
	printf("Divis�o : %f \n", divisao);
	
	return 0
	
}
