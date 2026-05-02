// Day 3
// Program: Binomial Coefficient using recursion
// Concept: Recursion and combinations (nCr)

#include <stdio.h>

// Recursive function
int BC(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return BC(n - 1, k - 1) + BC(n - 1, k);
}

int main() {
    int n, k;

    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    int result = BC(n, k);

    printf("Binomial Coefficient (C(%d, %d)) = %d\n", n, k, result);

    return 0;
}
