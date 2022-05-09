/*
1) Desenvolva uma solução inicial para T = 100 baseda em pthreads;
2) Calcule o speedup para as versões serial e paralela.
https://www.techiedelight.com/find-execution-time-c-program/
*/

#include<stdio.h>
#include <stdlib.h>  
#include <unistd.h>
#include <pthread.h>

//void *computation(void *add);

int main()
{
  //pthread_t thread1;

  float sol;float T=100;
  //long value1=sol;
  
  //pthread_create(&thread1, NULL, computation, (void*) &value1);
  
  for(float i=1;i<T;i++)
  {
    //printf("%.2f ",T);
    sol = sol + 1/i;
  }
  
  printf("\nsolução inicial para ln(100) é gual a: %.2f\n",sol);

  //pthread_join(thread1, NULL);
  
  return 0;
}
/*
void *computation(void *add)
{
  long sum = 0;
  long *add_num = (long *) (add);

  for (long i = 0; i < 1000000000; i++)
    sum += *add_num;
  return NULL;
} */
