// Escreva um programa que permite ler 2 notas de um aluno e :
//informar por meio de uma função a media;
//informar por meio de uma função se a média for maior ou
//igual a 7 o aluno estará aprovado, caso contrário, estará reprovado.

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
	
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%f",&segundoNumero);
	
	media = calcularMedia(primeiroNumero, segundoNumero);	 
	resultado = resultadoDoAluno() 
	
	printf("\n A media do aluno é: %.1f \n", media);	
	printf("\n o aluno está %f \n", resultado);
	
	return 0;
}
