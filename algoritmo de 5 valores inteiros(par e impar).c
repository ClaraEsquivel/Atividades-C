//Escreva um algoritmo em c que leia 5 valores inteiros e ao final� mostre:��
//a) quantos n�meros s�o pares;��
//b) quantos n�meros s�o �mpares;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int i, numero, pares = 0, impares = 0;

  for (i = 1; i <= 5; i++) {
    printf("Digite o %d� n�mero: ", i);
    scanf("%d", &numero);

    if (numero % 2 == 0) {
      pares++;
    } else {
      impares++;
    }
  }

  printf("\n%d n�meros pares\n", pares);
  printf("%d n�meros �mpares\n", impares);

  return 0;
}
