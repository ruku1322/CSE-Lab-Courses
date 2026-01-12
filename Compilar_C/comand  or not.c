#include <stdio.h>
#include <string.h>
int main()
{

char str[20];
scanf("%s",&str);

int len = strlen(str);
for (int i=0;i<=len;i++){
    if(str[i]=='/') {
        if(str[i+1]=='/'){
            printf("single line comand");}
            break;
        }

    else if(str[i]=='*'){
        if(str[i+1]=='/'){
            printf("multyple line comand");
             break;
        }
    }
    else {
         printf("It's not comand");
         break;
    }
    }


    return 0;
}
