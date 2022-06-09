//C program to remove first occurrence of a word from string.

#include<stdio.h>
#include<string.h>
#define max_size 100

void toremove(char*,const char *);

int main()
{
    char str[max_size];
    char remove[max_size];
    char str1[max_size][max_size];
    int i,j,len1,len2,found=0;

    printf("Enter the string: ");
    gets(str);

    printf("\nEnter the word to remove: ");
    gets(remove);

    len1=strlen(str);
    len2=strlen(remove);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;str[i]!=' ';j++)
        {
            str1[i][j]=str[i];
        }
        str1[i][j]=' ';
    }
     str1[i][j]='\0';
    for(i=0;str1[i][j]!='\0';i++)
    {
        found=1;
        for(j=0;str1[i][j]!=' ';j++)
        {
            if(str1[i][j]!=remove[j]);
            {
                found=0;
                break;
            }
        }

        if(found==1)
        {
             for(j=i;j<len1-len2;j++)
            {
                str[j]=str[j+len2];
            }
            break;
        }
    }
    printf("The string after removing %s from string :%s",remove,str);

    return 0;
}
