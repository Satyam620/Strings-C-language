//C program to count total number of vowels and consonants in a string.

#include<stdio.h>
#define max_size 100

int main()
{
    char str[max_size];

    int i,vowel=0,consonant=0;

    printf("Enter the string:\n");
    gets(str);

    for(i=0;str[i] !='\0';i++)
    {
       if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            /*
             * If the current character(str[i]) is a vowel
             */
            if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                vowel++;
            else
                consonant++;
        }
    }

    printf("\nVowels: %d",vowel);
    printf("\nConsonants: %d",consonant);

    return 0;
}