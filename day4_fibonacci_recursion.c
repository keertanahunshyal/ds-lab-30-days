// Day 4
// Program: Fibonacci using recursion
// Concept: Recursion (breaking problem into smaller calls)

#include <stdio.h>

// Recursive function
int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci not defined for negative numbers\n");
    } else {
        printf("Fibonacci of %d = %d\n", n, fib(n));
    }

    return 0;
}
