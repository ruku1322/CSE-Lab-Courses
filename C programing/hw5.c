#include <stdio.h>
int main(){
    float basic, gross, da, hra;
    printf("Enter basic salary of employee: ");
    scanf("%f", &basic);
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if( basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.30;
    }
    gross = basic + hra + da;
    printf("GROSS SALARY OF EMPLOYEE IS = %.3f", gross);
    return 0;
}
