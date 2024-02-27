#include <stdio.h>

int main(){
	char nome [200]; //cadeia
	char sexo; // caracter
	int idade;
	float peso;
	
	
	printf("Digite seu nome:  ");
	scanf("%s" , &nome); //%s = string - cadeia
    //extrair o que o usuario digitou
	
	fflush(stdin);
	//limpar o cache, normalmente utilizado após variáveis cadeia
	
	printf("Digite o sexo - (F) ou (M) :  ");
	scanf("%c" , &sexo); // %c = char - caracter
	
	printf("Digite sua idade :  ");
	scanf("%i" , &idade); // %i = int - inteiro
	
	printf("Digite seu peso :   ");
	scanf("%f" , &peso); // %f = float - real
	
	printf("\n=== Exibindo resultados do usuário ===");
	printf("Nome: %s \n" , nome);
	printf("Sexo: %c \n" , sexo);
	printf("Idade: %i \n" , idade);
	printf("Peso: %f \n" , peso);


	return 0;



}
