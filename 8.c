//C program to find total number of alphabets, digits or special characters in a string.

#include<stdio.h>
#define max_size 100

int main()
{
    char A[max_size];
    int i,alphabet=0,digit=0,special=0;

    printf("Enter the string:\n");
    gets(A);

    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]>='a' && A[i]<='z' || A[i]>='A' && A[i]<='Z')
        {
            alphabet++;
        }
        else if(A[i]>='0' && A[i]<= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }

    printf("\nAlphabets = %d",alphabet);
    printf("\nDigits = %d",digit);
    printf("\nSpecial character = %d",special);

    return 0;
}