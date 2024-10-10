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

  return valor, vez;
}

int caixa()
{
  int valor, nota100, nota50, nota20, nota10, nota5, nota1;

  printf("Qual o valor que deseja sacar?\n");
  scanf("%d",&valor);

  valor, nota100 = nota(100, valor);

  valor, nota50 = nota(50, valor);
  valor ,nota20 = nota(20, valor);
  valor, nota10 = nota(10, valor);
  valor, nota5 = nota(5, valor);
  valor, nota1 = nota(1, valor);

  printf("Voçe recebera %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5 e %d notas de 1.", nota100, nota50, nota20, nota10, nota5, nota1);

  return 0;
}
