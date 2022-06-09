//Write a C program to find last occurrence of a word in a given string.

#include<stdio.h>
#include<string.h>
#define max_size 100

int main()
{
    char str[max_size];
    char tofind[max_size];
    int i,index,j,found,word,string;

    printf("Enter the string:\n");
    gets(str);

    printf("\nEnter the word to find: ");
    gets(tofind);

    index=-1;
    word=strlen(tofind);
    string=strlen(str);    

    for(i=0;i<=string-word;i++)
    {
        found=1;
        for(j=0;j<word;j++)
        {
            if(str[i+j]!=tofind[j])
            {
                found=0;
                break;
            }
        }

        if(found==1)
        {
            index=i;
        }
    }

    if(index==-1)
    {
        printf("\n'%s' not found.",tofind);
    }
    else
    {
        printf("\n'%s' is found at index %d",tofind,index);
    }

    return 0;
}