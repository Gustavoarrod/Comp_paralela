/*  PROJ1 V2 - condição de corrida - crítico

Considerando os problemas relativos ao acesso de recurso compartilhado discutidos em sala de aula, faça as seguintes alterações no Projeto Final:

1) Crie uma versão do código utilizando OpenMP ao invés de pthreads;

2) Implemente a diretiva #pragma omp critical na variável global compartilhada por todas as threads comparando os valores e tempo de execução

3) Crie um arquivo chamado critical.md de texto explicando como é feito o controle de acesso à região crítica para a variável global compartilhada do seu projeto.
    
Gustavo de Araujo Ramos Rodrigues - TIA: 32088531
Heitor Ce Sun Lin - TIA: 31930451  

*/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

long int T = 32088531;

void taylor(double* sol); /* thread function */ 

int main(int argc, char* argv[]) 
{
  double sol = 0.0; /*  Store result in global_result */
  int thread_count;                       //sol

  thread_count = strtol(argv[1], NULL, 10);

# pragma omp parallel num_threads(thread_count)
  taylor(&sol);
  
  printf("\nsolução para ln(%ld) é gual a: %.2f\n", T,sol);
  
  return 0;
}

void taylor(double* sol) 
{
  double result = 0.0;
  int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();

  long int first_num = (my_rank * 2000000000) + 1;
  
  for (long int i = first_num; i < (first_num+2000000000); i++) 
  {
    result += 1/ (double) i;
    /* Reduction(<operator>: <variable list>)  */
  }

# pragma omp critical
  *sol += result;
  
  printf("Hello from thread %d of %d -> sum = %.3f\n", my_rank, thread_count, result);
  
} /* Hello */  
