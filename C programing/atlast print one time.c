#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, count;
    int alphabet[26] = {0}; // Initialize an array to store the count of each alphabet

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z') // Check if the character is a lowercase alphabet
        {
            alphabet[str[i] - 'a']++; // Increment the count of that alphabet
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') // Check if the character is an uppercase alphabet
        {
            alphabet[str[i] - 'A']++; // Increment the count of that alphabet
        }

        count = 1;

        for(j=i+1; j<len; j++)
        {
            if(str[i] == str[j] && str[i] != ' ')
            {
                count++;
                str[j] = '0';
            }
        }

        if(count > 1 && str[i] != '0')
        {
            printf("%c appears %d times\n", str[i], count);
        }
    }

    printf("Unique alphabets: ");

    for(i=0; i<26; i++)
    {
        if(alphabet[i] > 0)
        {
            printf("%c ", i+'a'); // Print the alphabet corresponding to the array index
        }
    }

    printf("\n");

    return 0;
}

