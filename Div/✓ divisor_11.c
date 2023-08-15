#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int div_11() 
{
  int divsr, inc, fin, i, div[50];

  printf("Digie o numero de inicio:");
  scanf("%d", &inc);

  printf("Digie o numero de termino:");
  scanf("%d", &fin);

  for (int(num) = inc; num <= fin; num++) 
  {
    if (num % 11 == 0) 
    {
      div[i] = num;
    }
    i++;
  }

  printf("%d", div[i]);

  return 0;
}
