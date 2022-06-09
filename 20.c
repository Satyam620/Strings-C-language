//C program to count frequency of each character in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int freq[26];
    int i,len;

    printf("Enter the string:\n");
    gets(str);

    len = strlen(str);

    for(i=0;i<26;i++)
    {
        freq[i]=0;
    }

    for(i=0;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-97]++;
        }
        else if(str[i]>='A' && str[i<='Z'])
        {
            freq[str[i]-65]++;
        }
    }

    printf("\nFrequency of all characters in the string:\n");

    for(i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            printf("'%c'= %d\n",(i+65),freq[i]);
        }
    }

    return 0;
}