#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int math()
{   
  int num1, num2, result, menu;
    
  printf("Digite o primeiro numero inteiro:");
  scanf("%d", &num1);

  printf("Digite o segundo numero inteiro:");
  scanf("%d", &num2);

  printf("Oque deseja fazer?\n 1-Soma\n2-Media\n3-Menor\nMaior\n");
 scanf("%d", &menu);

  if(menu == '1')
  {
    result = num1 + num2;
    printf("O resultado da soma é:%d", result);
  }
  else if(menu == '2')
  {
    result = (num1 + num2) / 2;
    printf("O resultado da media é:%d", result);
  }
      
  else if(menu == '3')
  {
    if(num1 > num2)
      printf("O menor é:%d", num1);
            
    else if(num1 < num2)
      printf("O menor é:%d", num2);
            
    else
      printf("Os dois são iguais");
  }

  else if(menu == '4')
    {
    if(num1 > num2)
      printf("O menor é:%d", num2);
            
    else if(num1 < num2)
      printf("O menor é:%d", num1);
            
    else
      printf("Os dois são iguais");
    }

  else
    printf("Opção invalida.");

    return 0;
}
