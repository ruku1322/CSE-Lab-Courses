#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, count = 0;

    printf("Enter a string: ");

     scanf("%s",str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            printf("%c ", str[i]);
            count++;
        }
    }

    printf("\nTotal uppercase letters: %d", count);

    return 0;
}

