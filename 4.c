//C program to compare two strings.

#include<stdio.h>
#define max_size 100

int main()
{
    char A[max_size];
    char B[max_size];

    int i,notsame;

    printf("Enter the first string:\n");
    gets(A);

    printf("\nEnter the second string:\n");
    gets(B);

    notsame=1;

    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]!= B[i])
        {
            notsame=0;
            break;
        }
    }

    if(notsame == 1)
    {
        printf("\nfirst string : %s",A);
        printf("\nSecond string : %s",B);
        printf("\nBoth strings are equal.");
    }
    
    else
    {
        printf("\nfirst string : %s",A);
        printf("\nSecond string : %s",B);
        printf("\nBoth strings are not equal."); 
    }

    return 0;
}