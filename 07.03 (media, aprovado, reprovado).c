// Escreva um programa que permite ler 2 notas de um aluno e :
//informar por meio de uma fun��o a media;
//informar por meio de uma fun��o se a m�dia for maior ou
//igual a 7 o aluno estar� aprovado, caso contr�rio, estar� reprovado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularMedia(float n1, float n2){ 
	float media;
	media = (n1 + n2) / 2;
	return media;
}

int resultadoDoAluno (float )
	float 
	
	

int main(){
	setlocale(LC_ALL, "");
	
	float primeiroNumero, segundoNumero;
	float media; resultado
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f",&segundoNumero);
	
	media = calcularMedia(primeiroNumero, segundoNumero);	 
	resultado = resultadoDoAluno() 
	
	printf("\n A media do aluno �: %.1f \n", media);	
	printf("\n o aluno est� %f \n", resultado);
	
	return 0;
}
