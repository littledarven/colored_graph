#include <stdio.h>
#include <stdlib.h>
/*
1 = vermelho
2 = azul
3 = verde
4 = amarelo
5 = preto
*/
typedef struct
{
	int color;
	int value;
	bool painted;
}Graph;
Graph graph[3];
int op;
int m;
int n;
int conections[3][3];
int main()
{
	int colors;
	int teste[3][3];
	n = 0;
	m = 0;
	int value;
	int vector[10];
	for(n=0;n<3;n++)
	{
		printf("Insira o valor: ");
		scanf("%d",&graph[n].value);
		conections[n][m] = graph[n].value;
		conections[m][n] = graph[n].value;
	}
	for(m=0;m<3;m++)
	{
		for(n=m;n<3;n++)
		{
			printf("%d esta ligado a %d ? 1 - SIM | 2 - NAO: ",conections[m][0], conections[0][n]);
			scanf("%d",&value);
			if(value == 1)
			{
				teste[m][n] = 1;
				teste[n][m] = 1;
			}
			else if(value == 2)
			{
				teste[m][n] = 0;
				teste[n][m] = 0;
			}
			else
			{
				printf("\nValor invalido !\n");
				n--;
			}
		}
	}
	int i ;
	graph[i].color = 1;
	colors++;
	i++;
	printf("\n\n\n\n");
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			printf("%d ",teste[m][n]);
		}
		printf("\n");
	}	
	graph[i].color = 1;
	graph[i].painted = true;
	colors++;
	i++;
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			if(teste[m][n] == 1)
			{
				
			}
		}
		printf("\n");
	}	
}

/*
|0 0| |0 1| |0 2| |0 3| |0 4|
|1 0| |1 1| |1 2| |1 3| |1 4|  
|2 0| |2 1| |2 2| |2 3| |2 4|
|3 0| |3 1| |3 2| |3 3| |3 4|
|4 0| |4 1| |4 2| |4 4| |4 4|
*/ 

