#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100

// Updated list of keywords
const char* keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "register", "return", "short", "signed", "sizeof",
    "static", "struct", "switch", "typedef", "union", "unsigned",
    "void", "volatile", "while"
};

int is_keyword(const char* str) {
    for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int is_operator(char ch) {
    char operators[] = "+-*/=%<>!&|^~";
    for (int i = 0; i < strlen(operators); i++) {
        if (ch == operators[i]) {
            return 1;
        }
    }
    return 0;
}

void analyze_input(const char* input) {
    char buffer[MAX_LENGTH];
    int index = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isspace(input[i]) || is_operator(input[i])) {
            if (index > 0) {
                buffer[index] = '\0';
                if (is_keyword(buffer)) {
                    printf("Keyword: %s\n", buffer);
                } else {
                    if (isdigit(buffer[0])) {
                        printf("Value: %s\n", buffer);
                    } else {
                        printf("Identifier: %s\n", buffer);
                    }
                }
                index = 0;
            }
            if (is_operator(input[i])) {
                printf("Operator: %c\n", input[i]);
            }
        } else {
            buffer[index++] = input[i];
        }
    }

    // Handle the last token if any
    if (index > 0) {
        buffer[index] = '\0';
        if (is_keyword(buffer)) {
            printf("Keyword: %s\n", buffer);
        } else {
            if (isdigit(buffer[0])) {
                printf("Value: %s\n", buffer);
            } else {
                printf("Identifier: %s\n", buffer);
            }
        }
    }
}

int main() {
    char input[MAX_LENGTH];

    printf("Enter a C code snippet: ");
    fgets(input, MAX_LENGTH, stdin);

    analyze_input(input);

    return 0;
}
