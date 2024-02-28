//Elabore um algoritmo que solicita do usuário: o nome de um aluno,
//sua idade e quatro notas.
//Calcule a média aritmética do aluno armazenando o resultado em
//uma variável.
//Mostre na tela: nome, idade, notas e média.

#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[100];
	int idade;
	float nota1, nota2, nota3, nota4; 
	float media;
	
	printf("Digite seu nome:  ");
	scanf("%s" , &nome);	
	
	fflush(stdin);
	
	printf("Digite sua idade:  ");
	scanf("%i" , &idade);
	
	printf("Digite sua primeira nota :   ");
	scanf("%f" , &nota1);
	
	printf("Digite sua segunda nota :  ");
	scanf("%f" , &nota2);
	
	printf("Digite sua terceira nota :  ");
	scanf("%f" , &nota3);
	
	printf("Digite sua quarta nota :  ");
	scanf("%f" , &nota4);
	
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("\n=== Dados solicitados ===");
	printf("\n Nome: %s \n" , nome);
	printf("Idade:  %i \n" , idade);
	printf("Primeira nota do aluno: %.1f \n", nota1);
	printf("Segunda nota do aluno: %.1f \n" , nota2);
	printf("Terceira nota do aluno: %.1f \n" , nota3);
	printf("Quarta nota do aluno: %.1f \n" , nota4);
	printf("Média do aluno: %.2f \n" , media);
	 
	return 0;
}
