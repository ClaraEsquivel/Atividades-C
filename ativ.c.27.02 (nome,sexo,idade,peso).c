#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome [200]; //cadeia
	char sexo; // caracter
	int idade;
	float peso;
	
	
	printf("Digite seu nome:  ");
	scanf("%s" , &nome); //%s = string - cadeia
    //extrair o que o usuario digitou
	
	fflush(stdin);
	//limpar o cache, normalmente utilizado ap�s vari�veis cadeia
	
	printf("Digite o sexo - (F) ou (M) :  ");
	scanf("%c" , &sexo); // %c = char - caracter
	
	printf("Digite sua idade :  ");
	scanf("%i" , &idade); // %i = int - inteiro
	
	printf("Digite seu peso :   ");
	scanf("%f" , &peso); // %f = float - real
	
	system("cls"); // limpar terminal
	
	printf("\n=== Exibindo resultados do usu�rio ===");
	printf("Nome: %s \n\n" , nome);
	printf("Sexo: %c \n" , sexo);
	printf("Idade: %i \n" , idade);
	printf("Peso: %.2f \n" , peso); //.2 = n�mero de casas decimais que quero ap�s a virgula


	return 0;



}
