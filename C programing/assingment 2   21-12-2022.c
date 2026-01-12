/*
#include <stdio.h>

int main()
{

 int Array[50], i, Number;

  printf("Enter Number of elements:  ");
  scanf("%d", &Number);

  printf("Enter elements ");
  for (i = 0; i < Number; i++)
   {
     scanf("%d", &Array[i]);
   }

  printf("Elemenst in this Array are :\n");
  for (i = 0; i < Number; i++)
  {
 	printf("%d\t", Array[i]);
  }
return 0;
}
*/
/*
#include <stdio.h>

int main()
{

   int i,n,a[100];

   printf("Input the number of elements:");
   scanf("%d",&n);

   printf("Input number of elements :");
   for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  }

   printf("The store values  are : \n");
   for(i=0;i<n;i++)
     {
	   printf("% 5d",a[i]);
	 }

   printf("\nThe values store  reverse are :\n");
   for(i=n-1;i>=0;i--)
      {
	   printf("% d\t",a[i]);
	  }
return 0;
}
*/
/*
#include <stdio.h>

int main()
{
 int Size, i, a[10], Add = 0;


 printf(" Enter the Size of array: ");
 scanf("%d", &Size);

 printf(" Enter the Elements\n");

 for(i = 0; i < Size; i++)
  {
      scanf("%d", &a[i]);
  }

 for(i = 0; i < Size; i ++)
 {
      Add = Add + a[i];
 }

 printf("Sum = %d ", Add);
return 0;
}

*/

/*
#include <stdio.h>

int main()
{

    int numbers[100], copy[100] = {0};
    int i, size;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Please enter array elements ");
    for(i = 0; i < size; i++)
    {

        scanf("%d", &numbers[i]);
    }

    printf("Original Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d \n", numbers[i]);
    }

    for(i=0; i<size; i++)
    {
        copy[i] = numbers[i];
    }

    printf("Copied Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", copy[i]);
    }
return 0;
}




*/
/*
#include <stdio.h>

int main()
{

{
  int row, col,SIZE;
   printf("Enter Number of elements:  ");
  scanf("%d", &SIZE);
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];


    printf("Enter elements in matrix A : \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("Enter elements in matrix B : \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }

    printf("Sum of matrices A+B = \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }}
return 0;
}

*/

/*
#include <stdio.h>


int cube(int num)
{int sub;
sub =(num * num * num);
    return sub;

}
int main()
{int num,sam;
    printf("Enter any number: ");
    scanf("%d",&num);
sam =cube(num);
printf(" number of cube is:%d ",sam);


    return 0;
}

*/
/*
#include<stdio.h>
void max_min(){
int i,max,min,N,x;
	printf("Enter N : ");
	scanf("%d",&N);
	max=0;
	min=999;
	for(i=1;i<=N;i++)
	{
		printf("Enter %d : ",i);
		scanf("%d",&x);

		if(max < x)
			max = x;

		if(min > x)
			min = x;
	}
	printf(" max = %d\n",max);
	printf("min = %d",min);

}
int main (){
max_min();
return 0;
}
*/
/*
#include<stdio.h>
void even_odd(){
int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);}
        int main (){
even_odd();
return 0;
}
*/
/*
#include<stdio.h>
void natural_number(){

  	int Number, i = 1;

  	printf("Enter any Integer Value :- ");
  	scanf("%d", &Number);

  	printf("List of Natural Numbers from 1 to %d are \n", Number);
	while(i <= Number)
  	{
    	printf(" %d \t", i);
    	i++;
  	}}
  	   int main (){
natural_number();
return 0;
}

*/

#include <stdio.h>
#define MAX_SIZE 100
int sum(int arr[], int start, int len);
int main()
{
    int arr[MAX_SIZE];
    int N, i, sumff;
    printf("Enter size of the array: ");
    scanf("%d", &N);
    printf("Enter elements in the array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    sumff = sum(arr, 0, N);
    printf("Sum of array elements: %d", sumff);
    return 0;
}
int sum(int arr[], int start, int len)
{
    if(start >= len)
        return 0;
    return (arr[start] + sum(arr, start + 1, len));
}

