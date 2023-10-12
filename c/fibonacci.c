#include <stdio.h>

int main() {
    int n, i;
    long long int fib[100]; // Using an array to store Fibonacci numbers

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    fib[0] = 0; // First Fibonacci number
    fib[1] = 1; // Second Fibonacci number

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; // Calculate the next Fibonacci number
    }

    printf("Fibonacci Series:\n");

    for (i = 0; i < n; i++) {
        printf("%lld ", fib[i]);
    }

    return 0;
}
