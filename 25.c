//C program to replace first occurrence of a character in a string.

#include<stdio.h>
#include<string.h>
#define max_size 100

void replace(char*str,char,char);

int main()
{
    char str[max_size];
    char toremove;
    char toadd;

    printf("Enter the string:\n");
    gets(str);

    printf("\nEnter the charcter to be replaced:\n");
    toremove=getchar();

    getchar();

    printf("\nEnter the replacemnet:\n");
    toadd=getchar();

    printf("\nString before replacing: %s",str);

    replace(str,toremove,toadd);

    printf("\nThe string after replacement: %s",str);

    return 0;
}

void replace(char*str,char toremove, char toadd)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==toremove)
        {
            str[i]=toadd;
            break;
        }
        i++;
    }
}