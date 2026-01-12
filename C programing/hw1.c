#include<stdio.h>
int main ()
{
    int year, week, day, days;
    printf ("Enter your all days : " );
    scanf ("%d",&days);
    year = days/365 ;
    week = (days-(365*year))/7 ;
    day = days - (365*year+week*7) ;
    printf ("%d year,%d week,%d day-",year, week, day);
    return 0;
}
