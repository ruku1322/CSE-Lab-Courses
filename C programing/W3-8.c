#include<stdio.h>
int main ()
{

int years,weeks,days;
int number_of_dayes=1329 ;
years = number_of_dayes/365;
weeks = (number_of_dayes-(years*365))/7;
days = number_of_dayes-((years*365)+(weeks*7));
printf("years : %d \n weeks : %d\n dayes : %d \n",years,weeks,days);
return 0;
}

