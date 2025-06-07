#include <stdio.h>

int collatz(int n);

int main() {
    int testCollatz = collatz(3);
    printf("steps: %i",testCollatz);
    return 0;
}

int collatz(int n) {
    if (n == 1) {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return 1 + collatz(n/2);
    }
    else if (n % 2 > 0) {
        return 1 + collatz(3*n+1);
    }
}