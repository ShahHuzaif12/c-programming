// array and its inverse
#include<stdio.h>
int main()
{
  int i, j, n, a[100];
  printf("Enter the size of the array: \n");
  scanf("%d", &n);

  printf("Enter the elements of the array: \n");
  for (i=0; i<n; i++)
  scanf("%d", &a[i]);

  printf("\nThe rverse of the array is: ");

  for (j=n-1; j>=0; j--)
   {
    printf("%d ", a[j]);
   }
return 0;
}