//C program to find the first occurrence of a character in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char n;
    int i,len,c=0;

    printf("Enter the string.\n");
    gets(str);

    len = strlen(str);

    printf("\nEnter the character to find.\n");
    scanf("%c",&n);

    for(i=0;i<len;i++)
    {
        if(n==str[i])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("Character not found.");
    }
    else
    {
        printf("\n'%c' occurs first at %d place.",n,i+1);
    }
    return 0;
}
