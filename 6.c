//C program to convert string to lowercase.

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
        if(A[i]>='A' && A[i]<='Z')
        {
            A[i] = A[i] + 32;
        }
    }

    printf("\nUppercase string: %s",A);

    return 0;
}