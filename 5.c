//C program to convert lowercase string to uppercase.

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
    }

    printf("\nUppercase string: %s",A);

    return 0;
}