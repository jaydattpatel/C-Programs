// author: jaydattpatel
#include <stdio.h>
#include<stdlib.h>

void sortarray(int arr[],int size)
   {
      int  i = 0 ;
      while(i<(size-1))
      {
         if(arr[i] > arr[i+1])
            {
               int temp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = temp;
               i = -1;
            }
         i++;
      };
   }

void getarrdata(int arr[],int size)
   {
      for(int i=0;i<size;i++)
            do{
               arr[i] = rand()%100;
            }while(arr[i] == 0);
   }

void display(int arr[],int size)
   {
      for(int i=0;i<size;i++)
            printf("%d. %d\n",i,arr[i]);  
   }

int binarysearch(int arr[],int size,int search_data)
   {
      int low=0, high=size-1,mid;
      int loop_count=0; 
      
      while(low<=high)
      {
         loop_count++;
         mid = (high+low)/2;
         if(arr[mid] == search_data)
         {
            printf("\nBinary Loop counts: %d\n",loop_count);
            return (mid);
         }
         if(arr[mid] > search_data)
            high = mid-1;
         if(arr[mid] < search_data)
            low = mid+1;
      }
      printf("\nLoop: %d\n",loop_count);
      return (-1);

   }

int main( )
{
 
   int arr[10];
   int data=0, loop_count, position;
   int size = sizeof(arr)/sizeof(arr[0]);
   getarrdata(arr,size);
   sortarray(arr,size);
   display(arr,size);
   printf("Enter data to search position:");
   scanf("%d",&data);
   position = binarysearch(arr,size,data);
   printf("Data %d is at position %d",data,position);
   
   return 0;
}