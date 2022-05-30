/*  PROJ1 V2 - condição de corrida - non crítico

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

double taylor(double* sol); /* thread function */ 
             
int main(int argc, char* argv[]) 
{
  double sol = 0.0; /*  Store result in global_result */

  int thread_count = strtol(argv[1], NULL, 10);
  //printf("Enter a,b, and n\n");

# pragma omp parallel for num_threads(thread_count)\
    reduction(+: sol)  
    /* Reduction(<operator>: <variable list>)  */
  for (long int i = 1; i <= T; i++) 
  {
    sol += 1 / i;
    //sol += 1 / (double) i;
  }
                        //long dec
  printf("\nsolução para ln(%ld) é gual a: %.2f\n", T,sol);
  
  return 0; 
}
