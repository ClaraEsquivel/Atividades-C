//Foi feita um pesquisa entre os habitantes de uma regi�o.
//Foram coletados dados de idade, sexo(M/F) e sal�rio.
//Fa�a um algoritmo que informe:

//a) media de salario do grupo
//b) maior e menor idade do grupo
//c) quantidade de mulheres com sal�rio a partir de R$5.000,00

//crie um menu com duas op��es:
// C�digo | descri��o
//   1	  | Adicionar pessoa
//	 2	  | Exibir resultados e sair

//o final da leitura de dados se dar� quando o usu�rio 
//digitar o n�mero do c�digo 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main (){
	setlocale(LC_ALL, "");
	int idade, soma = 0, contador =0;
	float salario, salarioMulher, mediaSalario;
	char opcao;
	char [50] "F", "M";
	
	printf("Digite sua idade:  ");
	scanf("%i", &idade)
	printf("Digite seu sexo [F] ou [M]:  ");
	scanf("%c", sexo),
	printf("Digite seu sal�rio: R$");
	scanf("%f", salario);
	
	while(){
		if(){
		
		 contador ++;
		soma += salario
		}
		
	}
	
	
	
	switch(opcao){
		case 1:
			printf("Adicionar pessoa");
			break;
		case 2:
			printf("Exibir resultado e sair");
			break;
		default:
			printf("Op��o inv�lida");
	}
	
	return 0;
}
