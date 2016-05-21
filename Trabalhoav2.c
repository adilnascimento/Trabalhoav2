#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ler nome de 30 alunos com notas de av1 em ordem decrescente.

  int const tam=30;
  int main ()

  {
  char nome[tam][15];
  float av1[tam];
  int i, j;
  float aux;
  char auxnome[15];
  
  //ler o nome de 30 alunos
  for(i=0; i<tam; i++)
  {
       
   printf("\nEntre com o nome do Aluno%d:\n", i+1);
   scanf(" %s", nome[i]);
   setbuf(stdin, NULL);
            // entrar com av1
 
   printf ("\nEntre com Av1 do %s:\n", nome[i]);
   scanf("%f", &av1[i]);
            
   }
 
   printf("\nnome:\t\tAv1:");
   printf("\n--------------------");
   
   /* Impressão do Vetor Ordenado */
 
   for(i=0; i<tam; i++)
   {
         for(j=i+1; j<tam; j++)
         {
                if(av1[j] > av1[i])
                {
                    aux = av1[j];
                    strcpy (auxnome, nome[j]);
                    av1[j] = av1[i];
                    strcpy (nome[j], nome[i]);
                    av1[i] = aux;
                    strcpy (nome[i], auxnome);
                }
         }
   }       
 
 
   for(i=0; i<tam; i++)
 {
    printf("\n%s\t\t%.2f", nome[i], av1[i] ); 
        

 }
     
    printf("\n---------------------");
    system ("pause"); 
    return 0;

 }