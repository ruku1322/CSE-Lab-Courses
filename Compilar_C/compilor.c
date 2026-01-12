#include<stdio.h>
int main()
{
    printf("Enter your line to check...\n");
    char str[100];
    gets(str);
    int flag =0;
    for(int i=0; i<sizeof(str); i++)
    {
        if(str[i]=='/')
        {
            if(str[i+1]=='/')
            {
                flag=1;

            }
            else if(str[i+1]=='*')
            {
                flag=2;
                i++;
            }

        }
        else if(str[i]=='*' && flag==2)
        {
            if(str[i+1]=='/')
            {
                flag=3;
            }

        }
    }
    if(flag==1)
    {
        printf("Single Line Comment");
    }
    else if(flag==3)
    {
        printf("Multiple Line Comment");
    }
    else
    {
        printf("Not comment");
    }


    return 0;
}
