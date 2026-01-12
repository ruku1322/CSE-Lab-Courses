#include <stdio.h>
int main()
{
int count=0;
char str[20];
scanf("%s",&str);
int length = sizeof(str);
for (int i=0;i<=length;i++){
    for (int j=0;j<=length;j++){

    if (str[i]== 'a' || str[i]== 'b'){
            if (str[i+j]!='b' ){
            count=0;
            }

     count = 1;

}}
}
 if(count==1){
    printf("okay \n");
    }
    else{

        printf("not ok \n");
    }

    return 0;
}
