// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>


int main( )
{
   int i,n=5;

   int x,xx,*mpi,*cpi;
   float y,yy,*mpf,*cpf;
   char z,zz,*mpc,*cpc;
   mpi = &x; mpf = &y; mpc = &z;
   cpi = &xx; cpf = &yy; cpc = &zz;
    // Dynamically allocate memory using malloc()
   mpi = (int*)malloc(n * sizeof(int)); 
   mpf = (float*)malloc(n * sizeof(float)); 
   mpc = (char*)malloc(n * sizeof(char)); 
    // Dynamically allocate memory using calloc()
   cpi = (int*)calloc(n, sizeof(int)); 
   cpf = (float*)calloc(n, sizeof(float)); 
   cpc = (char*)calloc(n, sizeof(char)); 

   // Check if the memory has been successfully allocated or not
  if (mpi == NULL || mpf == NULL || mpc == NULL)
        { printf("\nMemory not allocated by malloc.\n"); exit(0); }
   else if (cpi == NULL || cpf == NULL || cpc == NULL)
        {printf("\nMemory not allocated by calloc.\n"); exit(0); }
   else  
        {
            printf("\nMemory successfully allocated using malloc and calloc.\n"); // Memory has been successfully allocated
            free(mpi);  free(mpf);    free(mpc);
            printf("\nmalloc memory successfully freed.\n");
            free(cpi);  free(cpf);    free(cpc);
            printf("\ncalloc memory successfully freed.\n");
          }

  return 0;
}

