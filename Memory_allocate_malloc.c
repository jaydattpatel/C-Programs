// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>

int main( )
{
   int i,n;
   int x=5,*pi;
   float y=11.0,*pf;
   char z='c',*pc;

   pi = &x,
   pf = &y,
   pc = &z,

   printf("\nBefore allocation:\n");
   printf("\nInteger: %d, Add: %u",x,pi);
   printf("\nFloat: %f, Add: %u",y,pf);
   printf("\nChar: %c, Add: %u",z,pc);

   printf("\nHow many size of elements you want to incease:");
   scanf("%d",&n);
// Dynamically allocate memory using malloc()
   pi = (int*)malloc(n * sizeof(int)); 
   pf = (float*)malloc(n * sizeof(float)); 
   pc = (char*)malloc(n * sizeof(char)); 

   // Check if the memory has been successfully allocated or not
  if (pi == NULL || pf == NULL || pc == NULL)
        {
            printf("Memory not allocated.\n");
            exit(0);
        }
  else  
        {
        
            printf("Memory successfully allocated.\n"); // Memory has been successfully allocated
            for (i = 0; i < n; ++i)  // Get the elements of the array
                  {
                  pi[i] = i + 1;
                  pf[i] = (float)i + 0.1;
                  pc[i] = i + 65;
                  }
            printf("\n********After changes the size of elements********\n");
            printf("\ninteger:\n"); 
            for (i = 0; i < n; ++i) 
                  printf("Integer Data: %d, Add: %u\n", pi[i],pi+i);
            printf("\nfloat:\n");    
            for (i = 0; i < n; ++i) 
                  printf("Float Data: %f, Add: %u\n", pf[i],pf+i); 
            printf("\nchar:\n");    
            for (i = 0; i < n; ++i) 
                  printf("Char Data: %c, Add: %u\n", pc[i],pc+i);  
          }

  return 0;
}

