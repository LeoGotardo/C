#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Menu/menu.c"
#include "ATM/caixa_eletronico.c"
#include "Civil/civil.c" 
#include "Div/divisor_11.c"
#include "Math/math_program.c"
#include "Sal/salario.c"

int main() 
{
  setlocale(LC_ALL, "Portuguese");
  
  int(point) = menu();

  if(point == 1)
  {
    system("cls");
    caixa();
  }
  else if(point == 2)
  {
    system("cls");
    estado_civil();
  }

  else if(point == 3)
  {
    system("cls");
    div_11();
  }

  else if(point == 4)
  {
    system("cls");
    math();
  }

    else if(point == 5)
  {
    system("cls");
    salario_aumento();
  }

  return 0;
}
