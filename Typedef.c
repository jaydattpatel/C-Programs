// author: jaydattpatel
#include <stdio.h>
#include <string.h>

int main( )
{
         
   typedef int i;    // typedef define int instruction as i.
   typedef float f;  // typedef define float instruction as f.
   typedef char s;   // typedef define char instruction as s.
   typedef int* ip;    // typedef define int* pointer instruction as ip.
   typedef float* fp;  // typedef define float* pointer instruction as fp.
   typedef char* sp;   // typedef define char* pointer instruction as sp.
   
   i d1=10,d2=11;   //integer declaration
   f v1=14.5,v2=67.34;  //float declaration
   s c1[50]="string-1",c2[50]="string-2";   //string declaration

   ip pi1,pi2;  //integer pointer declaration
   fp pf1,pf2;  //float pointer declaration
   sp ps1,ps2;  //char pointer declaration
   
   pi1 = &d1;  
   pi2 = &d2;
   pf1 = &v1;  
   pf2 = &v2;
   ps1 = &c1[0];  
   ps2 = &c2[0];
   printf("Variable:%d,%d,%f,%f,%s,%s\n",d1,d2,v1,v2,c1,c2);
   printf("Var. with Poiner:%d,%d,%f,%f,%s,%s\n",*pi1,*pi2,*pf1,*pf2,ps1,ps2);
   return 0;
}

