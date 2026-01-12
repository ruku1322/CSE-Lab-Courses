#include<stdio.h>
int main ()
{
float wit,wit1,cit,cit1,Product;

printf("Input the first weight :");
scanf ("%f",&wit);

printf("Input the first no :");
scanf("%f",&cit);

printf("Input the second weight :");
scanf("%f",&wit1);

printf("Input the second no :");
scanf("%f",&cit1);

Product =((wit*cit)+(wit1*cit1))/(cit+cit1) ;
printf("Product of the above two integers = %lf",Product);
return 0;

}
