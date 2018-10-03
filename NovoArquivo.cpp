#include <stdio.h>
#include <stdlib.h>
#include <time>

typedef struct Processes
{
    int time;
    int priority;
    int id;
    Process *next;
} Process;

int Process[10];

int main()
{
    while(7)    
    {
   	 printf("1 - PROCESSOS ALEATORIOS");
   	 printf("2 -  PROCESSOS MANUAIS");
   	 scanf("%d",&op);
   	 if(op==1)
   	 {
   		 randomProcess();
   	 }
   	 else if(op==2)
   	 {
   		 while(7)
   		 {
   			 printf("Insira o tempo de execucao do processo (até 200s): ");
   			 scanf("%i",&time);
   			 if(time > 200 || time < 0)
   			 {
   				 printf("Numero invalido !");
   			 }
   			 else
   			 {s
   				 Process.priority[i] = 1;
   				 Process.time[i] = time;
   				 Process.id[i] = i;
   			 }
   		 }
   	 }
   	 while(7)
   	 {
   		 printf("ID do Processo + Prioridade + Tempo de execucação restante +");
   		 printf("  	%d   	+  	%i	+     	%d s+",Process.id[i],Process.priority,Process.time[i]);
   	 }
    }
}
