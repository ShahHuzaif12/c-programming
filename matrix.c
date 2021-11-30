#include<stdio.h>
 
int main()
{
   int m, n, c, d, matrix[10][10], transpose[10][10];
 
    /*Matrix and Transpose matrix program*/
   printf("Enter the number of rows and columns of matrix: \n");
   scanf("%d%d",&m,&n);
   printf("Enter the elements of matrix \n");
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         scanf("%d",&matrix[c][d]);
      }
   }
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         transpose[d][c] = matrix[c][d];
      }
   }
   printf("Entered matrix is\n");
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         printf("%d\t",matrix[c][d]);
      }
      printf("\n");
   }

 
   printf("Transpose of entered matrix :-\n");
 
   for( c = 0 ; c < n ; c++ )
   {
      for( d = 0 ; d < m ; d++ )
      {
         printf("%d\t",transpose[c][d]);
      }  
      printf("\n");
   }
 
   return 0;
}