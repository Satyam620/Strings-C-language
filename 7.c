//C program to toggle case of each character in a string.

#include<stdio.h>
#define max_size 100

int main()
{
    int i;

    char A[max_size];

    printf("Enter the string:\n");
    gets(A);

    printf("\nOriginal string: %s",A);

    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]>='a' && A[i]<='z')
        {
            A[i] = A[i] - 32;
        }

        else if(A[i]>='A' && A[i]<='Z')
        {
            A[i] = A[i] + 32;
        }
    }

    printf("\nToggled string: %s",A);

    return 0;
}