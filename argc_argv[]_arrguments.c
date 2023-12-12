// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int i=0;
    char **p;
    
    printf("\nProgram file location: %s\n" , argv[0]);
    
    for(p=argv;*p!=NULL;p++)
        {   i = i+1;
            sprintf(*p,"Argument-%d",i);
        }
   
    for(p=argv;*p!=NULL;p++)
        {   
            printf("%s\n",*p);
        }
    exit(EXIT_SUCCESS);
}