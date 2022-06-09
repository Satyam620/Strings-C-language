//C program to check whether a string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char rev[100];
    int i,flag;

    printf("Enter the string:\n");
    gets(str);

    strcpy(rev,str);
    strrev(rev);

    flag = strcmp(rev,str);

    if(flag==0)
    {
        printf("Palindrome string.");
    }
    else
    {
        printf("Not palindrome string.");
    }
    return 0;
}