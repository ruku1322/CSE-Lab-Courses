#include <stdio.h>
#define SIZE 10
int main()
{
    int amount, notes, i;

    int note[SIZE] =  {500, 200, 100, 50, 20, 10, 5, 2, 1 };
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("\n");
    for ( i = 0; i < SIZE; i++)
    {
        notes = amount / note[i];

        {
            amount = amount % note[i];
            printf("%d : %d  \n", note[i],notes);
        }
    }
    return 0;
}
