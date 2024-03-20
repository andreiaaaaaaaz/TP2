#include <stdio.h>
#include "sum.h"

int main() {
    int a, b, result;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);

    result = sum(a, b);

    printf("The sum of %d and %d is %d\n", a, b, result);

    return 0;
}
