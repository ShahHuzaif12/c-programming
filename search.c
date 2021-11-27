#include <stdio.h>
int main()
{
   int i, j, n, a[100],found;
   printf("enter the size");
   scanf("%d", &n);
   printf("\nenter the elements\n");
   for(i=0;i<n; i++)
   {
   	scanf("%d", &a[i]);
   	}
   	
   	printf("Enter the elements to search\n");
   	scanf("%d", &j);
   	 found = 0;
   	 
   	 
   	 
    for(i=0;i<n;i++)
    {
     if (a[i] == j)
      { 
        found = 1;
      break;
     }
      }
      
       if( found == 1)
     {
     printf(" element %d is found at %d position",j,i);
     }
      else
     {
        printf("%d is not in the entered array", j);
     }
  }
