#include <stdio.h>

int main()
{
    float basic, gross, da, hra;

    /* Input basic salary of employee */
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);


    /* Calculate D.A and H.R.A according to specified conditions */
    if(basic <= 10000)
    {
        da  = basic * 0.2;
        hra = basic * 0.8;
    }
    else if( basic <= 20000)
    {
        da  = basic * 0.25;
        hra = basic * 0.9;
    }
    else
    {
        da  = basic * 0.3;
        hra = basic * 0.95;
    }

    /* Calculate gross salary */
    gross = basic + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}
