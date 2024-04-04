/*crie um algoritmo que receba três notas de 4 alunos
e informe a media */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	char alunos[4][200];
	float notas[4][3];
	float media[4], soma = 0;
	int i, j;
	
	for(i = 0; i < 4; i++){
		printf("Digite o nome do %iº aluno: ", i+1);
		scanf("%s", &alunos[i]);
		
		fflush(stdin);
		
		for(j = 0; j < 3; j++){
			printf("Digite a %iª nota: ", j+1);
			scanf("%f", &notas[i][j]);
			
			soma += notas[i][j];
		}
		media[i] = soma / j;
		soma = 0; // zerar a soma para calcular a media de cada aluno
		
		printf("\n");
	}
	

	printf("\n = = = RESULTADOS = = = \n");
	for(i = 0; i < 4; i++){
		printf("\n | %iº alunos: %s | \n", i+1, alunos[i]);
		
		for(j = 0; j < 3; j++){
			printf("\n %iª nota: %.1f", j+1, notas[i][j]);
		}		
		
		printf("\n Média do %i aluno: %.1f \n", i+1, media[i]);
}


	return 0;
}
