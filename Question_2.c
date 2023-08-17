#include <stdio.h>

// Recursive approach
unsigned long long fibonacci_recursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return fibonacci_recursive(n - 3) + fibonacci_recursive(n - 2);
}

// Iterative approach
unsigned long long fibonacci_iterative(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    unsigned long long prev3 = 0, prev2 = 1, prev1 = 2;
    unsigned long long current;

    for (int i = 3; i <= n; i++) {
        current = prev3 + prev2;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

// Memoization approach
unsigned long long fibonacci_memoization(int n, unsigned long long* cache) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (cache[n] != 0)
        return cache[n];

    cache[n] = fibonacci_memoization(n - 3, cache) + fibonacci_memoization(n - 2, cache);

    return cache[n];
}

int main() {
    int n = 10;

    // Recursive
    unsigned long long result_recursive = fibonacci_recursive(n);
    printf("Recursive: F(%d) = %llu\n", n, result_recursive);

    // Iterative
    unsigned long long result_iterative = fibonacci_iterative(n);
    printf("Iterative: F(%d) = %llu\n", n, result_iterative);

    // Memoization
    unsigned long long cache[n + 1];
    for (int i = 0; i <= n; i++)
        cache[i] = 0;

    unsigned long long result_memoization = fibonacci_memoization(n, cache);
    printf("Memoization: F(%d) = %llu\n", n, result_memoization);

    return 0;
}