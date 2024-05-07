#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

int main()
{
    register int i, j=0;
    int tamanho;
    char x[51], y[51];

    // Leitura da string de entrada para colocar em X
    __fpurge(stdin);
    fgets(x, 50, stdin);

    // Eliminacao das consoantes da string em x e copia para a string y.
    for(i=0; x[i]; i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
        {
            y[j] = x[i];
            j++;
        }
    }
    // Insere o caractere '\0' no final da string y.
    y[j] = '\0';

    // Calcula o tamanho da string y.
    tamanho = strlen(y);

    // j inicia do final da string y.
    j = tamanho-1;

    // Laco do inicio ate o meio da string y
    // para comparar do final ate o meio da string y.
    for(i=0; i < tamanho/2; i++)
    {
	// Se os respectivos elementos forem diferentes
	// responda N e saia do programa.
        if(y[i] != y[j])
        {
            puts("N");
            return 0;
        }
	j = j-1;
    }

    // Se chegamos aqui, entao os respectivos
    // elementos sao iguais.
    puts("S");
    return 0;
}
