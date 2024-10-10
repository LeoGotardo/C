#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int salario_aumento()
{
  int id;
  float salario, result;
    
  printf("O funcionario é:\n1-Programador\n2-Analista de reses\n3-Administrador de banco de dados\n4-Gerente\n5-Diretor");
  scanf("%d",&id);

  printf("Digite o salario do funcionario:");
  scanf("%.12f",&salario);

  if(id == 1)
  {
    printf("O aumento é de 15%");

    result =  salario * (0.15 + 1);

    printf("Osalario atual sera de:%.12f",result);
  }


  else if(id == 2)
  {
    printf("O aumento é de 10%");

    result =  salario * (0.15 + 1);

    printf("Osalario atual sera de:%.12f",result);
  }

  else if(id == 3)
  {
    printf("O aumento é de 7%");

    result =  salario * (0.07 + 1);

    printf("Osalario atual sera de:%.12f",result);
  }

  else if(id == 4)
  {
    printf("O aumento é de 5%");

    result =  salario * (0.05 + 1);

    printf("Osalario atual sera de:%.12f",result);
  }

  else if(id == 5)
  {
    printf("O aumento é de 0%");

    result =  salario * (0.0 + 1);

    printf("Osalario atual sera de:%.12f",result);
  }

  else
  {    
    printf("Opção invalida.");
  }
    
  return 0;
}
