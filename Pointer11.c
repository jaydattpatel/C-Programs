// author: jaydattpatel
#include <stdio.h>
#include <stdlib.h>

int compare (const void *elem1, const void *elem2)
{
  if ((*(int *)elem1) == (*(int *)elem2))  return 0;
  else if ((*(int *)elem1) < (*(int *)elem2)) return -1;
  else return 1;
}

int main() 
{
      int arr[5] = {52, 14, 50, 48, 13};
      int total_elements, width_of_one_element, i;
      printf("sizeof(arr)=%d, sizeof(arr[0])=%d\n",sizeof(arr),sizeof(arr[0]));

      total_elements = sizeof(arr)/sizeof(arr[0]);   //total size of array divided with size of one element of array
      width_of_one_element = sizeof(arr[0]); // size of one element of array
      printf("Total Elemets=%d, Size of one Element=%d\n",total_elements,width_of_one_element);

      //qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
      qsort((void *)arr, total_elements, width_of_one_element, compare); 

      for (i = 0; i < 5; i++)
        printf("%d\t", arr[i]);
      return 0;
    
}
