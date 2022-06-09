//C program to reverse order of words in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    int i,index,wordstart,len,wordend;
    char str[100],rev[100];

    printf("Enter the string.\n");
    gets(str);

    len = strlen(str);
    index=0;

    wordstart=len-1;
    wordend=len-1;

    while(wordstart > 0)
    {
        if(str[wordstart] == ' ')
        {
            i= wordstart+1;
            while(i <= wordend)
            {
                rev[index] = str[i];
                i++;
                index++; 
            }
            rev[index++]=' ';
            wordend=wordstart-1;
            
        }
        wordstart --;
    }

    for(i=0;i<=wordend;i++)
    {
        rev[index]= str[i];
        index++;
    }

    rev[index]='\0';

    printf("Orgignal string:\n%s",str);
    printf("\nReversed string:\n%s",rev);

    return 0;
}