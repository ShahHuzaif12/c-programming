
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20], str2[20];
    printf("Please enter a string to check palindrome\n");
    scanf("%[^\n]", str1);
    int len = strlen(str1);
    for (int i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[len - 1];
        len--;
    } 
    str2[strlen(str1)] = '\0';
    if (!strcmp(str1, str2))
        printf("%s is a Palindrome\n", str1);
    else
        printf("%s is not a Palindrome\n", str1);
}