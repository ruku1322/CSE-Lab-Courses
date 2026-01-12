#include<stdio.h>

int nijer_pow(int a,int b)
{
for (int i=1; i<=b;i++){a=b*a;
b=a;
return b;
}
}
int main()
{
    int b= nijer_pow(3,2);
    print("%d",b);
}

