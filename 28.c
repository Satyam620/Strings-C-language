//C program to find first occurrence of a word in a string.

#include<stdio.h>
#include<string.h>
#define max_size 100

int main()
{
    char str[max_size];
    char tofind[max_size];
    int i,index,found=0;

    printf("Enter the string:\n");
    gets(str);

    printf("\nEnter the word to find: ");
    gets(tofind);

    index=0;
    while(str[index]!='\0')
    {
        
        if(str[index]==tofind[0])
        {
            i=0;
            found=1;
            while(tofind[i]!='\0')
            {
                if(str[index+i]!=tofind[i])
                {
                    found=0;
                    break;
                }

                i++;
            }
            
        }

        if(found==1)
        {
            break;
        }
        index++;
    }

    if(found==1)
    {
        printf("\n'%s' is found at index %d",tofind,index);
    }
    else
    {
        printf("\n'%s' is not found.",tofind);
    }

    return 0;
}
