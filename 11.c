//C program to find reverse of a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char rev[100];

    int i;

    printf("Enter the string:\n");
    gets(str);

    strrev(str);

    printf("Reverse: %s",str);
    return 0;

}