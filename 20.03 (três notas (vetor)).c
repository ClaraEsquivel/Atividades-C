#include <stdio.h>
#include <locale.h>
// crie um programa que leia 3 notas, armazenando em um vetor
//mostre as notas informadas

int main(){
	int nota[3];
	int i;
	setlocale(LC_ALL, "");
	
	printf("Informe três notas:\n ");
	
	for(i = 0; i < 3; i++){
		printf("Nota %d :", i + 1);
		scanf("%d", &nota[i]);
	}
	
	for(i = 0; i < 3; i++){
		printf("Nota %d: %d\n", i + 1, nota[i]);
	}
	
	return 0;
}
