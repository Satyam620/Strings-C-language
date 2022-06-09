//C program to remove first occurrence of a word from string.

#include<stdio.h>
#include<string.h>
#define max_size 100

void toremove(char*,const char *);

int main()
{
    char str[max_size];
    char remove[max_size];

    printf("Enter the string: ");
    gets(str);

    printf("\nEnter the word to remove: ");
    gets(remove);

    toremove(str,remove);

    printf("The string after removing %s from string :%s",remove,str);

    return 0;
}

void toremove(char*str,const char *remove)
{
    int i,j,len1,len2,found=0;
    len1=strlen(str);
    len2=strlen(remove);

    for(i=0;i<len1;i++)
    {
        found=1;
        for(j=0;j<len2;j++)
        {
            if(str[i+j] != remove[j])
            {
                found = 0;
                break;
            }
        }

        if(found==1)
        {
            for(j=i;j<=len1-len2;j++)
            {
                str[j]=str[j+len2];
            }
            break;
        }
    }
}