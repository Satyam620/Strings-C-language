//C program to remove all repeated characters in a string.
#include <stdio.h>
#include<string.h>

#define MAX_SIZE 100

void removeduplicate(char*str);
void removeall(char *str,const char toremove,int index);

int main()
{
    char str[MAX_SIZE];

    printf("Enter the string:\n");
    gets(str);

    printf("Original String: %s",str);
    removeduplicate(str);

    printf("\nString after removing the duplicate elements: %s",str);

    return 0;
}

void removeduplicate(char*str)
{
    int i=0;

    while(str[i]!='\0')
    {
        removeall(str,str[i],i+1);
        i++;
    }
}

void removeall(char*str,const char toremove,int index)
{
    int i;
    while(str[index]!='\0')
    {
        if(str[index]==toremove && str[index]!=' ')
        {
            i=index;
            while(str[i]!='\0')
            {
                str[i] = str[i+1];
                i++;
            }
        }
        else
        {
            index++;
        }
    }
}