//C program to count number of words in a string


#include<stdio.h>
#define max_size 100

int main()
{
    int i,word=1;

    char str[max_size];

    printf("Enter the string:\n");
    gets(str);

    for(i=0;str[i] != 0;i++)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]== '\t')
        {
            word++;
        }
    }

    printf("Word count : %d",word);
    return 0;
}