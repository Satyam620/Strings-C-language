//Logic to search occurrences of a character in given string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char n;
    int i,len,j=0;

    printf("Enter the string.\n");
    gets(str);

    len = strlen(str);

    printf("\nEnter the character to find.\n");
    scanf("%c",&n);

    
    for(i=0;i<len;i++)
    {
        if(n==str[i])
        {
            printf("\n'%c' occurs last at index %d",n,i);
            j=1;

        }
    }
    if(j==0)
    {
        printf("Character not found!");
    }

    return 0;
}