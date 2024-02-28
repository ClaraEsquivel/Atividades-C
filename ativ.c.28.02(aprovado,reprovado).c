#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //comando pra aceitar caracter especial da lingua portuguesa

void cabecalho (){
	system("cls || clear"); // limpar tela
	fflush(stdin); // limpar cache
}

int main (){
	
	setlocale(LC_ALL, ""); // usa o idioma do computador
	
	char nome[120];
	int idade;
	float primeiraNota, segundaNota, terceiraNota;
	float media = 7;
	
	cabecalho();
	printf("Digite o seu nome:  ");
	scanf("%s", &nome);

	cabecalho();
	printf("Digite a sua idade:  ");
	scanf("%i" , &idade);
	
	cabecalho();
	printf("Digite a sua primeira nota: ");
	scanf("%f", &primeiraNota);
	
	cabecalho();
	printf("Digite a sua segunda nota:  ");
	scanf("%f", &segundaNota);
	
	cabecalho();
	printf("Digite a sua terceira nota:  ");
	scanf("%f", &terceiraNota);
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;
	
	cabecalho();	
	printf("=== Dados solicitadis ===");	
	printf("\n Nome do aluno: %s \n", nome);
	printf("\n Idade do aluno: %i \n", idade);
	printf("\n Média do aluno: %.2f \n", media);
	
	if (media >=7){
		printf("\nAPROVADO");
	} 
	else{
		printf("\nREPROVADO");
	}

	
	return 0;
}
