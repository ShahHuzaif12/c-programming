\\bubble sort in simple way//
#include <stdio.h>
void b_sort(int a[], int n);
int main ()
{
      int i,j,n;
      int a[100];
      printf("Enter the size\n");
      scanf("%d", &n);

      printf("Enter the elements: \n");
     for(i=0;i<n; i++)
    	{
       scanf("%d",&a[i]);
	    }
	  
	     printf("the entered array is\n");
	      for(i=0;i<n;i++)
	        {
	         	printf("%d ", a[i]);
	      	}
	      	b_sort(a,n);
	      	printf("\nthe sorted array is : \n");
     for (i=0; i<n; i++)
     {
        printf("%d ", a[i]);
	    }
	}
	
	void b_sort(int x[], int s)
{
	int i, j, temp;
	     for(i=0; i< (s-1); i++)
	     {
	     for(j=0; j<(s-1); j++)
	     {
       if(x[j] > x[j+1])
       {
         temp = x[j];
         x[j] = x[j+1];
         x[j+1] = temp;
       }
     }
   }
   
}
