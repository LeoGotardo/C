#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu() 
{
  int ind;

  system("cls");
  printf("1-Caixa Eletronico.\n\n2-Estado Civil.\n\n3-Numeros divisiveis por 11.\n\n4-Math\n\n5-Salario.\n");
  scanf("%d", &ind);

  if (ind == 1)
  {
    system("cls");
    return ind = 1;
  }

  else if (ind == 2)
  {
    system("cls");
    return ind = 2;
  }
  
  else if (ind == 3)
  {
    system("cls");
    return ind = 3;
  }

  else if(ind == 4)
  {  
    system("cls");
    return ind = 4;
  }
    
  else if (ind == 5)
  {   
    system("cls");
    return ind = 5;
  }
    
  else
  {
    system("cls");
    menu();
    return 0;
  }
}
