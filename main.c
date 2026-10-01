#include <stdio.h>

int main(void) {
    int a, b;
    char op;
    int res;

    printf("enter the calculation: ");
    scanf("%d %c %d", &a, &op, &b);

    if (op == '+') {
        res = a + b;
    } else if (op == '-') {
        res = a - b;
    } else if (op == '*') {
        res = a * b;
    } else if (op == '/') {
       res = a / b;
    }

    printf("= %i\n", res);

    return 0;
}