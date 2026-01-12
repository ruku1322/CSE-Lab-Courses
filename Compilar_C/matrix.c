#include<stdio.h>
int main()
{
    int A[2][2];
    int B[2][2];
    int C[2][2] = {0};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {

            scanf("%d", &A[i][j]);
        }
    }

     for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {

            scanf("%d", &B[i][j]);
        }
    }

     for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {

            C[i][j] = A[i][j] * B[i][j];
        }
    }

     for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {

            printf("%d ", C[i][j]);
        }

        printf("\n");
    }




    return 0;
}
