//C program to remove last occurrence of a character from the string.

#include<stdio.h>
#include<string.h>

void toremovelast (char*,const char);

int main()
{
    char str[100];
    char toremove;

    printf("Enter the string:\n");
    gets(str);

    printf("Enter the letter to remove:\n");
    toremove = getchar();

    toremovelast(str,toremove);

    printf("The string after removing '%c' from string is %s",toremove,str);

    return 0;
    
}


void toremovelast(char*str,const char toremove)
{
    int i,last,len;
    i=0;
    len= strlen(str);

    while(i<len)
    {
        if(str[i]==toremove)
            last=i;

        i++;
    }

    if(last != -1)
    {
        i = last;

        /*
         * Shift all characters right to the position found above to left
         */
        while(i<len)
        {
            str[i] = str[i+1];
            i++;
        }
    }
}