#include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;  // Base case: the sum of 0 natural numbers is 0
    } else {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int N;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("N should be a positive integer.\n");
    } else {
        int result = sumOfNaturalNumbers(N);
        printf("The sum of the first %d natural numbers is %d\n", N, result);
    }

    return 0;
}
