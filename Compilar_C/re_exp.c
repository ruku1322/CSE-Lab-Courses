#include <stdio.h>
#include <stdbool.h>

bool matches_ab_pattern(const char *str) {

    enum { START, FOUND_A, FOUND_B } state = START;

    while (*str) {
        if (state == START) {
            if (*str == 'a') {
                state = FOUND_A;
            } else if (*str == 'b') {
                state = FOUND_B;
            } else {
                return false;
            }
        } else if (state == FOUND_A) {
            if (*str == 'a') {

                continue;
            } else if (*str == 'b') {
                state = FOUND_B;
            } else {
                return false;
            }
        } else if (state == FOUND_B) {
            if (*str == 'b') {

                continue;
            } else {
                return false;
            }
        }
        str++;
    }


    return state == FOUND_B;
}

int main() {
    char input[100];

    printf("Enter a string to check against the regex (a*b+): ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    if (matches_ab_pattern(input)) {
        printf("The string '%s' matches the regex 'a*b+'.\n", input);
    } else {
        printf("The string '%s' does not match the regex 'a*b+'.\n", input);
    }

    return 0;
}

