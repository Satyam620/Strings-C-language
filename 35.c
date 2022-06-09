//C program to trim leading white spaces from a string.
#include<stdio.h>
#include<string.h>
#define max 100

int main()
{
    char str[max];
    int i,index=0;

    printf("Enter the string: ");
    gets(str);
    printf("String before removing the spaces:\n%s",str);
    while(str[index]==' '||str[index]=='\n'||str[index]=='\t')
    {
        index++;
    }

    if(index!=0)
    {
        i=0;
        while(str[i+index]!='\0')
        {
            str[i]=str[i+index];
            i++;
        }
        str[i]='\0';
    }
    printf("\nString after removing leading white space:\n%s",str);
    return 0;
}