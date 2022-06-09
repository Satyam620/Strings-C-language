//Write a C program to copy one string to another string.

#include<stdio.h>
#define max_size 100

int main()
{
    int i;
    char text1[max_size];
    char text2[max_size];

    printf("Enter the text:\n");
    gets(text1);

    for(i=0;text1[i] != '\0';i++)
    {
        text2[i] = text1[i];
    }

    text2[i] = '\0';

    printf("\nOriginal string: %s ",text1);
    printf("\nCopied string:  %s ",text2);
    printf("\nTotal characters copied = %d\n", i);

    return 0;
}