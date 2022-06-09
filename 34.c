//C program to remove all occurrence of a word in string.
#include<stdio.h>
#include<string.h>
#define max_size 100

int main()
{
    char str[max_size];
    char word[max_size];
    int i,j,n,k,index,found;
    int lenstr,lenword;

    printf("Enter the string: ");
    gets(str);
    printf("\nEnter the word to remove: ");
    gets(word);

    lenstr=strlen(str);
    lenword=strlen(word);
    index=-1;
    n=lenstr-lenword;
    for(i=0;i<lenstr;i++)
    {
        found=1;
        for(j=0;j<lenword;j++)
        {
            if(str[i+j]!=word[j])
            {
                found=0;
                break;
            }
        }
        if(str[i+j]!=' ' && str[i+j]!='\t' &&str[i+j]!='\n' && str[i+j]!='\0')
        {
            found=0;
        }
        if(found==1)
        {
            index=i;
            for(k=index;k<=n;k++)
            {
                str[k]=str[k+lenword];
            }
            n=lenstr-lenword;   
        }
        
    }

    if(index==-1)
    {
        printf("%s-not found.",word);
    }
    else
    {
        printf("String after removing '%s' is: %s ",word,str);
    }
    return 0;
}