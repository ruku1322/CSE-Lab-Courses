/*clude <stdio.h>
#define size 5
int main()
{
    int arr[size] ;

 printf("Enter your number of array: \n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of given array present on odd position: \n");

    for (int i = 0; i < size; i = i+2) {
        printf("%d\n", arr[i]);
    }
     printf("Elements of given array present on even position: \n");
 for (int i = 1; i < size; i = i+2) {
        printf("%d\n", arr[i]);
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[10];
    int sum,product,i;
    for(i=0; i<10; i++)
    {
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    sum=0;
    product=1;
    for(i=0; i<10; i++)
    {
        sum=sum+arr[i];
        product=product*arr[i];
    }
    printf("\nSum of array is     : %d"  ,sum);
    printf("\nProduct of array is : %d\n",product);
    return 0;
}


#include <stdio.h>
void main (){
   int num[100];
   int i, j, a, n;
   printf("enter number of elements in an array : ");
   scanf("%d", &n);
   printf("Enter the elements : ");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
    for (j = i + 1; j < n; ++j){
    if (num[i] > num[j]){
    a = num[i];
    num[i] = num[j];
    num[j] = a;
    }  }   }
   printf("The numbers in ascending order is:");
   for (i = 0; i < n; ++i){
          printf("%d\n", num[i]);
   }
   return 0;
}



#include <stdio.h>
int main()
{	int arr[5];
	int i,j,n=5;
	int ind,ele;
	for(i=0; i<n; i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);	}
	printf("Array elements are: ");
	for(i=0; i<n; i++)
	printf("%d\n ",arr[i]);
	ind=-1;
	for(i=0; i<n; i++){
    for(j=i+1; j<n; j++)    {
    if(arr[i]==arr[j])  {
    ele=arr[j];
    ind=j;  }    }
	 if(ind!=-1)
		printf("%d repeated \n",ele);
	else
		printf("There is no repeated element\n");
	return 0; } }

*/

#include<stdio.h>
void main(){
    int arr[100],a,i,max,min,diff;
    printf("size of array is: ");
    scanf("%d",&a);
    printf("enter the element :  ");
    for(i=0;i<a;i++){
    scanf("%d",&arr[i]);    }
    printf("the array is \n");
    for(i=0;i<a;i++){
    printf("%d\n ",arr[i]);    }
    min= max=arr[0];
    for(i=0;i<a;i++){
        if(max<arr[i]){
            max=arr[i];       }    }
    for(i=0;i<a;i++){
        if(min>arr[i]){
            min=arr[i];        }    }
    printf("%d is smaller then %d\n",min,max);
    diff=max-min;
    printf("the difference between them is %d",diff);
    return 0;
}
