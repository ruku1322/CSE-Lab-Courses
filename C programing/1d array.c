#include<stdio.h>
int main(){

   int a[10];

   int i,n;
   printf("umber of n:");
   scanf(" %d",&n);
   for(i=1; i<=n; i++) {

    scanf("%d", &a[i]);

   }
    for(i=1; i<=n; i++) {

     printf("%d",a[i]);
     printf("\n");

   }int large = a[1];
   for(i=2; i<=n; i++) {
if(a[i]>large)
    large=a[i];

   }
printf(" large = %d",large);
}
