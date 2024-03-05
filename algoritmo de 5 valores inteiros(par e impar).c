//Escreva um algoritmo em c que leia 5 valores inteiros e ao final  mostre:  
//a) quantos números são pares;  
//b) quantos números são ímpares;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int i, numero, pares = 0, impares = 0;

  for (i = 1; i <= 5; i++) {
    printf("Digite o %dº número: ", i);
    scanf("%d", &numero);

    if (numero % 2 == 0) {
      pares++;
    } else {
      impares++;
    }
  }

  printf("\n%d números pares\n", pares);
  printf("%d números ímpares\n", impares);

  return 0;
}
