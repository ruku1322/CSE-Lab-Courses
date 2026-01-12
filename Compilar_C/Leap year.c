#include <Stdio.h>
int main(){

     int year;
     printf("Enter a Year: ");
     scanf("%d",&year);

     if ((year%400==0) || (year%100!=0 && year%4==0))
        printf("Leap Year");
     else
        printf("Not Leap Year");





}
