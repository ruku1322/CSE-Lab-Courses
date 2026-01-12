#include <stdio.h>
#include <string.h>
#define MAX_INPUT_SIZE 100
int main() {
    char input[MAX_INPUT_SIZE];
    int is_single_line_comment = 0;
    int is_multiple_line_comment = 0;
    printf("Enter a string: ");
    fgets(input, MAX_INPUT_SIZE, stdin);

    size_t length = strlen(input);
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }
    if (strncmp(input, "//", 2) == 0) {
        is_single_line_comment = 1;
    }
    if (strstr(input, "/*") != NULL && strstr(input, "*/") != NULL) {
        is_multiple_line_comment = 1;
    }
    if (is_single_line_comment) {
        printf("It is a single-line comment.\n");
    }
    else if (is_multiple_line_comment) {
        printf("It is a multiple-line comment.\n");
    }
    else {
        printf("its not a comment.\n");
    }

    return 0;
}
