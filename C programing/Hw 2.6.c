#include <stdio.h>

int main() {

    int a, b, i;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    i = (a > b) ? a : b;
     while (1) {
        if ((i % a == 0) && (i % b == 0)){
            printf("The LCM of %d and %d = %d.", a, b, i);
           break;
        }
  ++i;
     }
    return 0;
}
