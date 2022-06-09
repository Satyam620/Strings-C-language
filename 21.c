//C program to remove first occurrence of a character from string.

#include<stdio.h>
#include<string.h>

void toremovefirst (char*,const char);

int main()
{
    char str[100];
    char toremove;

    printf("Enter the string:\n");
    gets(str);

    printf("Enter the letter to remove:\n");
    toremove = getchar();

    toremovefirst(str,toremove);

    printf("The string after removing '%c' from string is %s",toremove,str);

    return 0;
    
}


void toremovefirst(char*str,const char toremove)
{
    int i,len;
    i=0;
    len=strlen(str);

    while(i<len && str[i]!=toremove)
        i++;

    while(i<len)
    {
        str[i] = str[i+1];
        i++;
    }
}