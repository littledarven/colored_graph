#include <stdio.h>
#include <stdlib.h>

/*
1 = vermelho
2 = azul
3 = verde
4 = amarelo
5 = preto
*/

typedef struct Graph
{
	char color;
}graph;
int op;
int m;
int n;
int conections[5][5];
int main()
{
	int colors[10];
	int teste[5][5];
	n = 0;
	m = 0;
	int value;
	int vector[10];
	for(n=0;n<5;n++)
	{
		printf("Insira o valor: ");
		scanf("%d",&value);
		conections[n][m] = value;
		conections[m][n] = value;
	}
	for(m=0;m<5;m++)
	{
		for(n=0;n<5;n++)
		{
			printf("%d esta ligado a %d ? 1 - SIM | 2 - NAO: ",conections[m][0], conections[0][n]);
			scanf("%d",&value);
			if(value == 1)
			{
				teste[m][n] = 1;
			}
			else if(value == 2)
			{
				teste[m][n] = 0;
			}
			else
			{
				printf("\nValor invalido !\n");
				n--;
			}
		}
	}
	for(m=0;m<5;m++)
	{
		for(n=0;n<5;n++)
		{
			printf("%d \t",teste[m][n]);
		}
		printf("\n");
	}	
}

/*
 00 01 02 03 04
 10 11 12 13 14  
 20 21 22 23 24
 30 31 32 33 34
 40 41 42 44 44

*/
