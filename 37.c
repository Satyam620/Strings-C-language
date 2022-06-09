#include<stdio.h>
#define max 100
void trim(char*str);

int main()
{
    int i=0,index=0;
    char str[max];

    printf("Enter the string:\n");
    gets(str);
    printf("The string before removing trailing spaces:\n'%s'",str);

    trim(str);

    printf("\nThe string after removing trailing spaces:\n'%s'",str);
    
    return 0;
}

void trim(char*str)
{
    int i,index=0;
    while(str[index]==' '||str[index]=='\n'||str[index]=='\t')
    {
        index++;
    }

    if(index!=0)
    {
        i=0;
        while(str[i+index]!='\0')
        {
            str[i]=str[i+index];
            i++;
        }
        str[i]='\0';
    }

    i = 0;
    index = -1;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index = i;
        }

        i++;
    }

    /* Mark the next character to last non white space character as NULL */
    str[index + 1] = '\0';
}