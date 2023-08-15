#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int estado_civil()
{
  char estado_civil[50], nome[50];
      
  printf("Digite seu nome: ");
  scanf("%c", &nome);
      
  printf("\nDigite o seu estado civil: ");
  scanf("%c", estado_civil);
    
  if(strcmp(estado_civil, "s") == 0 || strcmp(estado_civil, "S") == '0' || strcmp(estado_civil, "Solteiro") == 0 || strcmp(estado_civil, "solteiro") == 0)
    printf("%s, você é solteiro", nome);
          
  else if(strcmp(estado_civil,"c") == 0 || strcmp(estado_civil, "C") == 0 || strcmp(estado_civil, "Casado") == 0 || strcmp(estado_civil, "Casado") == 0)
    printf("%s, você é casado(a)", nome);
  else if(strcmp(estado_civil, "d") == 0 || strcmp(estado_civil, "D") == 0 || strcmp(estado_civil, "Divorciado") == 0 || strcmp(estado_civil, "divorciado") == 0) 
    printf("%s, voce é divorciado(a)", nome);
      
  else if(strcmp(estado_civil, "v") == 0 || strcmp(estado_civil, "V") == 0 || strcmp(estado_civil, "Viuvo") == 0 || strcmp(estado_civil, "viuvo") == 0)
    printf("%s, você é viuvo(a)", nome);
  else
    printf("Estado civil invalido");

  return 0;
}
