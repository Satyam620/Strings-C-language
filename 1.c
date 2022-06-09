//Write a C program to find length of a string.

#include<stdio.h>
#define max_size 100
int main()
{
    int i,count=0;
    char text[max_size];

    printf("Enter the text:\n");
    gets(text);

    for(i=0;text[i]!='\0';i++)
    {
        count++;
    }

    printf("Length of '%s' is %d",text,count);
    return 0;
}