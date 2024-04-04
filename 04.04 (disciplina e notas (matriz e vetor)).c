#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define DISCIPLINA 3
#define NOTAS 2

int main(){
	setlocale(LC_ALL, "");
	
	char disciplina[DISCIPLINA][200];
	float notas[DISCIPLINA] [NOTAS];
	int i, j;
	
	for(i = 0; i < DISCIPLINA; i++){
		printf("Digite a %iª disciplina: ", i+1);
		scanf("%s", &disciplina[i]);
		
		fflush(stdin);
		
		for(j = 0; j < NOTAS; j++){
			printf("Digite a %iª nota: ", j+1);
			scanf("%f", &notas[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < DISCIPLINA; i++){
		printf(" | %iª disciplina: %s | \n", i+1, disciplina[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("%i nota: %.1f \n", j+1, notas[i][j]);
		}
		
	}
	
	return 0;
}

