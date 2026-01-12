#include<stdio.h>
int main(){

      int num;

      printf("Enter Your Score: ");
      scanf("%d",&num);

      if(num >= 80 && num <= 100)
        printf("A+");
      else if(num >= 75 && num < 80)
        printf("A");
      else if(num >= 70 && num < 75)
        printf("A-");
      else if(num >= 65 && num < 70)
        printf("B+");
      else if(num >= 60 && num < 65)
        printf("B");
      else if(num >= 55 && num < 60)
        printf("B-");
      else if(num >= 50 && num < 55)
        printf("C+");
      else if(num >= 45 && num < 50)
        printf("C");
      else if(num >= 40 && num < 45)
        printf("D");
      else
        printf("F");

        return 0;

}

