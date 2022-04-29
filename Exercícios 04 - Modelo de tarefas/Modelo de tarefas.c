/*

Solução inicial para ln(10);

Gustavo de Araujo Ramos Rodrigues - TIA: 32088531
Heitor Ce Sun Lin - TIA: 31930451  

*/

#include<stdio.h>
#include <stdlib.h>  

int main()
{
  float sol;float T;
  for(T=1;T<10+1;T++)
  {
    //printf("%.2f ",T);
    sol = sol + 1/T;
  }
  
  printf("\nsolução inicial para ln(10) é gual a: %.2f\n",sol);
}