/* Name : Md. Shakib Ahamed
   ID   : 2215151130
   sec  :2C2         Batch : 51*/
#include <stdio.h>
int main (){
    int a,b, add,sub,mult,div;
   void addetion( int a,int b){
    add = a+ b;
    printf("add is : %d\n",add);
    }
     void subs(int a,int b){
    sub = a- b;
    printf("sub is : %d\n",sub);
    }
     void multi(int a,int b){
    mult = a* b;
    printf("mult is : %d\n",mult);}
     void dive(int a,int b){
    div = a/ b;
    printf("div is : %d\n",div);
    }
printf("enter the int number of a,b : ");
scanf("%d%d",&a,&b);
      addetion(a,b);
       subs(a,b);
        multi(a,b);
         dive(a,b);
     }
