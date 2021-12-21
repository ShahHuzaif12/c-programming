#include <stdio.h>
struct student
{
     int roll_no; 
    char name[60];
    double marks;
};
  int main()
  {
      int i, j = 2;
      struct student s[60];
      {
          for (i=0; i<j; i++)   /* if u want  to get the more number of students initilize value of j to that number*/
          {
              printf("\nEnter roll no, name and marks of student %d\n", i+1);
              scanf("%d %s %lf", &s[i].roll_no, &s[i].name, &s[i].marks);
          }
      }
      printf("roll\tname\tmarks\n");
      for(i=0; i<j; i++)
      {
          printf("%d\t%s\t%2.lf\t\n", s[i].roll_no, s[i].name, s[i].marks);
      }
  }