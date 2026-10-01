#include <stdio.h>

int main(void) {
    int num;
    int result;
    printf("enter an integer: ");
    scanf("%d", &num);

    if (num<0) {
        result = -num;
    }
    else {
        result = num;
    }
    printf("The absolute value of %d is %d", num, result);
    return 0;
}