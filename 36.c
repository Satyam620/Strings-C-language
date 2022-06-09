//C program to trim trailing white space from a string.
#include<stdio.h>
#define max 100

int main()
{
    int i=0,index=-1;
    char str[max];

    printf("Enter the string:\n");
    gets(str);
    printf("The string before removing trailing spaces:\n'%s'",str);

    while(str[i]!='\0')
    {
        if(str[i]!=' ' && str[i]!='\t' && str[i]!='\n')
        {
            index=i;
        }
        i++;
    }
    str[index+1]='\0';

    printf("\nThe string after removing trailing spaces:\n'%s'",str);
    
    return 0;
}