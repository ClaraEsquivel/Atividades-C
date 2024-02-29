//Elabore um algoritmo para receber o login e senha de um usuário.
//Caso o usuário e senha estejam corretos, mostre a mensagem 
//“Bem-vindo!”, caso contrário, mostre a mensagem “Login ou senha inválidos.”

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
	// str = string / cmp = comparação
	printf("\n Bem-vindo!");
	} 
	else{
		printf("\n Acesso negado!");
	}
	
	
	return 0;
}


