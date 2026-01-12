#include <stdio.h>

int main() {
    char A;

    printf("Enter Your Alphabet: ");
    scanf("%c", &A);


    if (A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U' || A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u') {
        printf("You Entered Vowel\n");
    }

    else if ((A >= 'a' && A <= 'z') || (A >= 'A' && A <= 'Z')) {
        printf("You Entered Consonant\n");
    }

    else {
        printf("You Entered Number Or Special Character\n");
    }

    return 0;
}

