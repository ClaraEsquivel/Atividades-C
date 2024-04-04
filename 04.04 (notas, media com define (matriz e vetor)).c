/*crie um algoritmo que receba três notas de 4 alunos
e informe a media */

#include <stdio.h>
#include <locale.h>

#define ALUNOS 4
#define NOTAS 3
int main(){
	setlocale(LC_ALL, "");
	
	char alunos[ALUNOS][200];
	float notas[ALUNOS][NOTAS];
	float media[NOTAS], soma = 0;
	int i, j;
	
	for(i = 0; i < ALUNOS; i++){
		printf("Digite o nome do %iº aluno: ", i+1);
		scanf("%s", &alunos[i]);
		
		fflush(stdin);
		
		for(j = 0; j < NOTAS; j++){
			printf("Digite a %iª nota: ", j+1);
			scanf("%f", &notas[i][j]);
			
			soma += notas[i][j];
		}
		media[i] = soma / NOTAS;
		soma = 0; // zerar a soma para calcular a media de cada aluno
		printf("\n");
	}
	
	printf("\n = = = RESULTADOS = = = \n");
	for(i = 0; i < ALUNOS; i++){
		printf("\n | %iº alunos: %s | \n", i+1, alunos[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("\n %iª nota: %.1f", j+1, notas[i][j]);
		}		
		
		printf("\n Média do %iº aluno: %.1f \n", i+1, media[i]);
}


	return 0;
}
