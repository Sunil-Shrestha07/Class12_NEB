#include <stdio.h>

long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! is 1
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long result = factorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }

    return 0;
}
