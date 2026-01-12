#include<stdio.h>
#include<string.h>
void parindrome()
{
char s[100];
    scanf("%s", s);


   int len = strlen(s);
   int flag = 1;
   for(int i = 0, j = len-1; i < j; i++, j--){

    if(s[i]!=s[j]){

        flag = 0;
        break;
    }
   }

   if(flag == 1){
    printf("YES");
   }
   else{
    printf("NO");

}
}

int main()
{


    parindrome();




 return  0;
}
