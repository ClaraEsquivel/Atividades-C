//Elabore um algoritmo para receber o login e senha de um usu�rio.
//Caso o usu�rio e senha estejam corretos, mostre a mensagem 
//�Bem-vindo!�, caso contr�rio, mostre a mensagem �Login ou senha inv�lidos.�

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

void cabecalho(){
	system ("cls || clear");
	fflush(stdin);
}

//declarando variaveis
int main(){
	char login[200], senha[200];
	char loginCadastrado[200] = "Clara", senhaCadastrada[200] = "123456";
	
	
//solicitando dados	
	cabecalho();
	printf("Digite o login: \n");
	scanf("%s", &login);
	
	cabecalho();
	printf("Digite a senha: \n");
	scanf("%s", &senha);
	
//conferindo dados
	cabecalho();
	if(strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0){
	// str = string / cmp = compara��o
	printf("\n Bem-vindo!");
	} 
	else{
		printf("\n Acesso negado!");
	}
	
	
	return 0;
}


