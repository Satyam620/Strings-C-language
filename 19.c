//Logic to find minimum occurring character in string.

#include<stdio.h>
#include<string.h>

#define max_size 100
#define max_char 255

int main()
{
    char str[max_size];
    int freq[max_char];

    int i,min,ascii,c;

    printf("Enter the string:\n");
    gets(str);

    for(i=0;i<max_char;i++)
    {
        freq[i]=0;
    }

    i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            ascii=(int)str[i];
            freq[ascii]+=1;
        }
        i++;
    }
    min=0;
    for(i=0;i<max_char;i++)
    {
        if(freq[i]!=0)
        {
            if(freq[min] == 0 || freq[i]<freq[min])
            {
                min=i;
            }
        }
    }

     printf("Minimum occurring character is '%c' = %d times.", min, freq[min]);
    return 0;
}