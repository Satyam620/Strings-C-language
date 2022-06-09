//C program to remove last occurrence of a word in string.
#include<stdio.h>
#include<string.h>
#define max_size 100

int main()
{
    char str[max_size];
    char word[max_size];
    int i,j,index,found;
    int lenstr,lenword;

    printf("Enter the string: ");
    gets(str);
    printf("\nEnter the word to remove: ");
    gets(word);

    lenstr=strlen(str);
    lenword=strlen(word);
    index=-1;

    for(i=0;i<lenstr;i++)
    {
        found=1;
        for(j=0;j<lenword;j++)
        {
            if(str[i+j]!=word[j])
            {
                found=0;
            }
        }
        if(found==1)
        {
            index=i;
        }
    }

    if(index==-1)
    {
        printf("%s-not found.",word);
    }
    else
    {
        for(i=index;i<=lenstr-lenword;i++)
        {
            str[i]=str[i+lenword];
        }
        printf("String after removing '%s' is: %s ",word,str);
    }
    return 0;
}