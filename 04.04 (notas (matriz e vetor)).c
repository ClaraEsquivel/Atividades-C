#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//crie um algoritmo que receba tr�s notas de dois alunos e mostre
/*
Marta
1� nota:7
2� nota:9
3� nota:8

Jo�o Santos
1� nota:8
2� nota:7
3� nota:3
*/

int main(){
	setlocale(LC_ALL,"");
	
	char alunos[2][200]; // vetor para dois nomes
	float notas[2][3]; //matriz para 2 alunos e 3 notas
	int i, j;
	
	for(i = 0; i < 2; i++){
		printf("Digite o nome do %i� aluno: ", i+1);
		scanf("%s", &alunos[i]);
		
		fflush(stdin);
		
		for(j = 0; j < 3; j++){
			printf("Digite a %i� nota:  ", j+1);
			scanf("%f", &notas[i][j]);
		}
		printf("\n"); // pular linha
	}
	 
	printf("\n = = = Resultados = = = \n");
	for(i = 0; i < 2; i++){
		printf(" \n | %i� aluno: %s | \n  ", i+1, alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("\n %i� nota: %.1f \n ", j+1, notas[i][j]);
	
		}
	}
	
	return 0;
}
