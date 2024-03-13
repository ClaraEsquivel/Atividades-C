#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
 
 int main(){
 	
 	 float nota;
 	 
 	 printf("Digite uma nota:  ");
 	 scanf("%f", &nota);
 	 
 	 while(nota < 0 || nota > 10){ // Depende de um bloco antes para
 	 							  // validar o laço de repetição
 	 	printf("Digite uma nota:  ");
 	    scanf("%f", &nota);
	  }
	  
	  printf("Nota informada : %.1f \n", nota);
	  
	 return 0;	
 }
