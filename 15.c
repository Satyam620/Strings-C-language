//C program to find last occurrence of a character in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char n;
    int i=0,len,j,c;

    printf("Enter the string.\n");
    gets(str);

    len = strlen(str);

    printf("\nEnter the character to find.\n");
    scanf("%c",&n);

    for(i=0;i<=len;i++)
    {
        if(n==str[i])
        {
            j=1;
            c=i+1;
        } 
    }
    if(j==0)
    {
        printf("Character not found.");
        
    }
    else
    {
        printf("\n'%c' occurs last at %d place.",n,c);
    }
    return 0;
}
