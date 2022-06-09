//C program to replace all occurrences of a character in a string.
#include<stdio.h>
#include<string.h>

#define max_size 100

void replaceall(char*str,char toremove,char toadd);

int main()
{
    char str[max_size];
    char toadd,toremove;

    printf("Enter the string:\n");
    gets(str);

    printf("Enter the character to replaced: ");
    toremove= getchar();

    getchar();

    printf("Enter the Replacing character:  ");
    toadd=getchar();

    printf("\nOriginal string: %s",str);

    replaceall(str,toremove,toadd);

    printf("\nAfter Replacing string : %s",str);

    return 0;
}   


void replaceall(char*str,char toremove,char toadd)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==toremove)
        {
            str[i]=toadd;
        }
        i++;
    }
}