#include <stdio.h>
int main ()
{
    /*
    int i = -5 ;
    while (i<=5)
    {
        if (i>=0)
            break ;
        else
        {
            i++;
            continue;
        }
        printf("Neso");
    }*/


    int i =1024 ;
    for (;i;i>>=1)
        printf("hello, world\n");
    return 0;
}
