// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>

int main( )
{
   int i,n;
   int x,xx,*mpi,*cpi;
   float y,yy,*mpf,*cpf;
   char z,zz,*mpc,*cpc;
   mpi = &x; mpf = &y; mpc = &z;
   cpi = &xx; cpf = &yy; cpc = &zz;

   printf("\nBefore allocation by malloc:\n");
   printf("\nInteger: %d, Add: %u",x,mpi);
   printf("\nFloat: %f, Add: %u",y,mpf);
   printf("\nChar: %c, Add: %u",z,mpc);

   printf("\nBefore allocation by calloc:\n");
   printf("\nInteger: %d, Add: %u",xx,cpi);
   printf("\nFloat: %f, Add: %u",yy,cpf);
   printf("\nChar: %c, Add: %u",zz,cpc);

   printf("\nHow many size of elements you want to incease:");
   scanf("%d",&n);

   // Dynamically allocate memory using malloc()
   mpi = (int*)malloc(n * sizeof(int)); 
   mpf = (float*)malloc(n * sizeof(float)); 
   mpc = (char*)malloc(n * sizeof(char)); 
   // Dynamically allocate memory using calloc()
   cpi = (int*)calloc(n, sizeof(int)); 
   cpf = (float*)calloc(n, sizeof(float)); 
   cpc = (char*)calloc(n, sizeof(char)); 

   lable:      // assign lable   
   // Check if the memory has been successfully allocated or not
  if (mpi == NULL || mpf == NULL || mpc == NULL)
        {printf("\nMemory not allocated by malloc.\n");  exit(0);}
   else if (cpi == NULL || cpf == NULL || cpc == NULL)
        {printf("\nMemory not allocated by calloc.\n");  exit(0);}
   else  
      {
        
         printf("Memory successfully allocated using calloc.\n"); // Memory has been successfully allocated
         
         for (i = 0; i < n; ++i)  // Get the elements of the array
            {
               mpi[i] = i + 1;
               mpf[i] = (float)i + 0.1;
               mpc[i] = i + 65;

               cpi[i] = i + 1;
               cpf[i] = (float)i + 0.1;
               cpc[i] = i + 65;
            }
         
         printf("\n********After changes the size of elements********\n");

         printf("\n--------- Malloc-----------\n");
         printf("\ninteger:\n"); 
         for (i = 0; i < n; ++i) 
            printf("Malloc Integer Data: %d, Add: %u\n", mpi[i],mpi+i);
         printf("\nfloat:\n");    
         for (i = 0; i < n; ++i)  
            printf("Malloc Float Data: %f, Add: %u\n", mpf[i],mpf+i); 
         printf("\nchar:\n");    
         for (i = 0; i < n; ++i) 
            printf("Malloc Char Data: %c, Add: %u\n", mpc[i],mpc+i);

         printf("\n--------- calloc-----------\n");
         printf("\ninteger:\n"); 
         for (i = 0; i < n; ++i) 
            printf("calloc Integer Data: %d, Add: %u\n", cpi[i],cpi+i); 
         printf("\nfloat:\n");    
         for (i = 0; i < n; ++i) 
            printf("calloc Float Data: %f, Add: %u\n", cpf[i],cpf+i); 
         printf("\nchar:\n");    
         for (i = 0; i < n; ++i) 
            printf("calloc Char Data: %c, Add: %u\n", cpc[i],cpc+i);
            
      }

   printf("\nHow many size of elements you want to re-allocate:");
   scanf("%d",&n);

   mpi = realloc(mpi,n * sizeof(int)); 
   mpf = realloc(mpf,n * sizeof(float));
   mpc = realloc(mpc,n * sizeof(char));

   cpi = realloc(cpi,n * sizeof(int)); 
   cpf = realloc(cpf,n * sizeof(float)); 
   cpc = realloc(cpc,n * sizeof(char));      

   goto lable;
  return 0;
}

