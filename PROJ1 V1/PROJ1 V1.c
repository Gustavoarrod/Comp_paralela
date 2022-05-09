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
  //pthread_t thread2;

  //long value1 = 1;
  //long value2 = 2;

  //pthread_create(&thread1, NULL, computation, (void*) &value1);
  //pthread_create(&thread2, NULL, computation, (void*) &value2);
  
  float sol;float T;
  for(T=1;T<100+1;T++)
  {
    //printf("%.2f ",T);
    sol = sol + 1/T;
  }
  
  printf("\nsolução inicial para ln(10) é gual a: %.2f\n",sol);

  //pthread_join(thread1, NULL);
  //pthread_join(thread2, NULL);
  
  return 0;
}
/*
void *computation(void *add)
{
  long sum = 0;

  // cast the void pointer add to a long pointer
  long *add_num = (long *) (add);
  
  // de-reference add_num to get at the value pointed to by add_num, have 
  // the loop run many, many times doing some computational work
  for (long i = 0; i < 1000000000; i++)
    sum += *add_num;

  return NULL;
} */