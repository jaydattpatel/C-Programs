// author: jaydattpatel
#include <stdio.h>
int main() 
{
      char *city[4] = {"Chennai", "Ahmedabad", "Kolkata", "Mumbai"};
      int row,col;
      for (row = 0; row < 4; row++)
        {
          col = 0;
          while(*(city[row]+col) != '\0')
          {
              printf("%c", *(city[row]+col));
              col++;
          }
          printf("\n");      
        }
        
      return 0;
    
}
