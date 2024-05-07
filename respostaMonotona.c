#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char s[100000]; // Tamanho máximo da String
  int n=0; // Tamanho da String de entrada
  int resposta=0; // Resposta final
  register int i;
 
  // Leitura da variavel n 
  // printf("Digite o valor de n: ");
  scanf("%d", &n);

  // Leitura da string
  // printf("Digite a string:");
  __fpurge(stdin);

  // Lendo a partir da posicao 1, 
  // pois precisamos de um espaço vazio 
  // no início da string para o for.
  fgets(s+1, 99999, stdin);
  s[0]=0;
  s[strlen(s)-1] = '\0';

  // Imprime a string para ter certeza.
  // printf("<%s>\n", s);

  for(i=1; i<=n; i++)
  {
   if(s[i] == 'a' && (s[i-1]=='a'||s[i+1]=='a') )
   {
      //printf("s[%d] = %c | s[%d] = %c | s[%d] = %c\n", i-1, s[i-1], i, s[i], i+1, s[i+1]);
      resposta+=1;
   }
  }

  //printf("Resposta: ");
  printf("%d\n", resposta);
  return 0;
}

