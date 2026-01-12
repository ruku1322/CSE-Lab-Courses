#include<stdio.h>
int main(){

   int disp[3][3];

   int i, j,a1=0,b1=0,a2=0,b2=0,a3=0,b3=0;
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   } printf("\n\n\n");
    for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d:",disp[i][j]);

      }         printf("\n");
   } printf("\n\n\n");
   for(j=0; j<3; j++) {
      for(i=0;i<3;i++) {
         printf("%d:",disp[i][j]);

      }         printf("\n");
   }


return 0;
}
