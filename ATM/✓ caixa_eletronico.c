#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nota(nota, valor)
{
  int vez;

    while(valor % nota == 0)
    {
      valor = valor - nota;
      vez += 1;
    }

  return valor;
}

int caixa()
{
  int valor, nota100, nota50, nota20, nota10, nota5, nota1;

  printf("Qual o valor que deseja sacar?\n");
  scanf("%d",&valor);

  nota100 = nota(100);
  nota50 = nota(50);
  nota20 = nota(20);
  nota10 = nota(10);
  nota5 = nota(5);
  nota1 = nota(1);

  printf("Voçe recebera %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5 e %d notas de 1.", nota100, nota50, nota20, nota10, nota5, nota1);

  return 0;
}
