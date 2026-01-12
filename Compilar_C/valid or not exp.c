#include <stdio.h>
#include <string.h>

int isValid(const char *expr) {
    if (expr == NULL || strlen(expr) == 0) {
        return 0;
    }

    int len = strlen(expr);
    int lastWasOperator = 1;
    int parenthesesCount = 0;

    for (int i = 0; i < len; i++) {
        char current = expr[i];

        if (!((current >= '0' && current <= '9') ||
              current == '+' || current == '-' ||
              current == '*' || current == '/' ||
              current == '(' || current == ')')) {
            return 0;
        }


        if (current == '/' && (i + 1 < len && expr[i + 1] == '0')) {
            return 0;
        }


        if (current == '+' || current == '-' || current == '*' || current == '/') {
            if (lastWasOperator) {
                return 0;
            }
            lastWasOperator = 1;
        } else if (current == '(') {
            parenthesesCount++;
            lastWasOperator = 0;
        } else if (current == ')') {
            parenthesesCount--;
            if (parenthesesCount < 0) {
                return 0;
            }
            lastWasOperator = 0;
        } else {
            lastWasOperator = 0;
        }
    }


    if (lastWasOperator) {
        return 0;
    }

    if (parenthesesCount != 0) {
        return 0;
    }

    return 1;
}

int main() {
    char expression[256];

    printf("Enter a mathematical expression: ");
    fgets(expression, sizeof(expression), stdin);


    expression[strcspn(expression, "\n")] = 0;

    if (isValid(expression)) {
        printf("The expression is valid.\n");
    } else {
        printf("The expression is invalid.\n");
    }

    return 0;
}
