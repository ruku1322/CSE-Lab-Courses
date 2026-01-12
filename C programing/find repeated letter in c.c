#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, count;

    printf("Enter a string: ");

    scanf("%s",str);


   for(i=0; i<strlen(str); i++)
    {
        count = 1;

        for(j=i+1; j<strlen(str); j++)
        {
            if(str[i] == str[j] && str[i] != ' ')
            {
                count++;
                str[j] = '0';
            }}
        if(count > 1 && str[i] != '0')
        {
            printf("%c appears %d times\n", str[i], count);
            printf("The Repeated letter %c%c\n",str[i],str[j]);
        }
        }
    return 0;
}

