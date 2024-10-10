#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_console() {
    #ifdef _WIN32
        system("cls"); // Windows system command to clear the console
    #else
        system("clear"); // Unix-based system command (Linux, macOS) to clear the console
    #endif
}

int menu() 
{
  int ind;

  clear_console();
  printf("1-Caixa Eletronico.\n\n2-Estado Civil.\n\n3-Numeros divisiveis por 11.\n\n4-Math\n\n5-Salario.\n");
  scanf("%d", &ind);

  if (ind == 1)
  {
    clear_console();
    return ind = 1;
  }

  else if (ind == 2)
  {
    clear_console();
    return ind = 2;
  }
  
  else if (ind == 3)
  {
    clear_console();
    return ind = 3;
  }

  else if(ind == 4)
  {  
    clear_console();
    return ind = 4;
  }
    
  else if (ind == 5)
  {   
    clear_console();
    return ind = 5;
  }
    
  else
  {
    clear_console();
    menu();
    return 0;
  }
}
