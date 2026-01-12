
#include<stdio.h>
int main(){

   int disp[3][3];

   int i, j,a1=0,b1=0,a2=0,b2=0,a3=0,b3=0;
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
    for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d:",disp[i][j]);

      }         printf("\n");
   }

   printf("sum of column ");
   for(i=0; i<1; i++) {
      for(j=0;j<3;j++) {
         a1 = a1+(disp[i][j]);


         }printf("a1=%d \n", a1);
      }
       printf("sum of column ");
   for(i=1; i<2; i++) {
      for(j=0;j<3;j++) {
         a2 = a2+(disp[i][j]);

         } printf("a2= %d \n", a2);

      }
       printf("sum of column ");
   for(i=2; i<3; i++) {
      for(j=0;j<3;j++) {
         a3 = a3+(disp[i][j]);


         }printf("a3=%d \n", a3);
      }printf("sum of row ");
       for(j=0; j<1; j++) {
      for(i=0;i<3;i++) {
         b1 = b1+(disp[i][j]);


         }
      }printf("b1=%d \n", b1);
      printf("sum of row ");
       for(j=1; j<2; j++) {
      for(i=0;i<3;i++) {
         b2 = b2+(disp[i][j]);


         }
      }printf("b2=%d \n", b2);
      printf("sum of row ");
       for(j=2; j<3; j++) {
      for(i=0;i<3;i++) {
         b3 = b3+(disp[i][j]);


         }
      }printf("b3=%d \n", b3);

   return 0;
}
