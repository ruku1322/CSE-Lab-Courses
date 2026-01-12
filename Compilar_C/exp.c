#include <stdio.h>
#include <string.h>

int main() {
    char expression[25];

    printf("Enter a mathematical expression: ");

    scanf("%[^\n]", expression);

    int len = strlen(expression);
    int lastWasOperator = 1;
    int parenthesesCount = 0;
    int valid = 1;

    for (int j = 0; j < len; j++) {
        char current = expression[j];

        if (!((current >= '0' && current <= '9') ||
              (current >= 'A' && current <= 'Z') ||
              (current >= 'a' && current <= 'Z') ||
                current == '+' || current == '-' ||
                current == '*' || current == '/' ||
                current == '(' || current == ')')) {
            valid = 0;
            break;
        }
        if (current == '+' || current == '-' || current == '*' || current == '/') {
            if (lastWasOperator) {
                valid = 0;
                break;
            }
            lastWasOperator = 1;
        }
        else if (current == '(') {
            parenthesesCount++;
            lastWasOperator = 0;
        }
        else if (current == ')') {
            parenthesesCount--;
            if (parenthesesCount < 0) {
                valid = 0;
                break;
            }
            lastWasOperator = 0;
        }
        else {
            lastWasOperator = 0;
        }
    }


    ////hgfghghgbjhg



    if (lastWasOperator) {
        valid = 0;
    }

    if (parenthesesCount != 0) {
        valid = 0;
    }
    if (valid) {
        printf("The expression is valid.\n");
    } else {
        printf("The expression is invalid.\n");
    }

    return 0;
}
