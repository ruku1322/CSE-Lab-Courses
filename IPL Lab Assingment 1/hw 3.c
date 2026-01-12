#include <stdio.h>
#define SIZE 9
int main()
{
    int amount, notes, i;

    int denominations[SIZE] =  {2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("\n");
    for ( i = 0; i < SIZE; i++)
    {
        notes = amount / denominations[i];
        if (notes)
        {
            amount = amount % denominations[i];
            printf("%d * %d = %d \n", notes, denominations[i],
                   notes * denominations[i]);
        }
    }
    return 0;
}
