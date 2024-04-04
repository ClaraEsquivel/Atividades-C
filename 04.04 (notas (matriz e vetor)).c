#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//crie um algoritmo que receba três notas de dois alunos e mostre
/*
Marta
1ª nota:7
2ª nota:9
3ª nota:8

João Santos
1ª nota:8
2ª nota:7
3ª nota:3
*/

int main(){
	setlocale(LC_ALL,"");
	
	char alunos[2][200]; // vetor para dois nomes
	float notas[2][3]; //matriz para 2 alunos e 3 notas
	int i, j;
	
	for(i = 0; i < 2; i++){
		printf("Digite o nome do %iº aluno: ", i+1);
		scanf("%s", &alunos[i]);
		
		fflush(stdin);
		
		for(j = 0; j < 3; j++){
			printf("Digite a %iª nota:  ", j+1);
			scanf("%f", &notas[i][j]);
		}
		printf("\n"); // pular linha
	}
	 
	printf("\n = = = Resultados = = = \n");
	for(i = 0; i < 2; i++){
		printf(" \n | %iº aluno: %s | \n  ", i+1, alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("\n %iª nota: %.1f \n ", j+1, notas[i][j]);
	
		}
	}
	
	return 0;
}
