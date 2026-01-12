#include<stdio.h>
int main(){

        char A;

      printf("Enter Your Alphabet: ");
      scanf("%c",&A);

        if(A == 'A' || 'E' ||'I' ||'O' ||'U' || 'a' || 'e' || 'i' || 'o' || 'u')
           printf("You Entered Vowel");
        else if(A == 'b'||'c'||'d'||'f'||'g'||'i'||'j'||'k'||'l'||'m'||'n'||'p'||'q'||'r'||'s'||'t'||'v'||'w'||'x'||'y'||'z'||'B'||'C'||'D'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'P'||'Q'||'R'||'S'||'T'||'V'||'W'||'X'||'Y'||'Z')
            printf("You Entered Consonant");
        else
            printf("You Entered Number Or Special Character");








}
