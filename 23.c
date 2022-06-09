//C program to remove all occurrences of a character from string.

#include<stdio.h>
#include<string.h>

#define max_size 100

void removeall(char * , const char);

int main()
{
    char str[max_size];
    char toremove;

    printf("Enter the string: ");
    gets(str);

    printf("Enter the character you want to remove: ");
    toremove = getchar();

    removeall(str,toremove);

    printf("String after removing '%c' is %s",toremove,str);

    return 0;
}

void removeall(char * str,const char toremove)
{
    int i,j;
    int len = strlen(str);


    for(i=0;i<len;i++)
    {
        if(str[i] == toremove)
        {
            for(j=i;j<len;j++)
            {
                str[j]= str[j+1];
            }
            len--;
            i--;
        }
    }
}