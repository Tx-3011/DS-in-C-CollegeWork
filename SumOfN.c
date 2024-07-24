#include <stdio.h>

int sumOfN(int n) {
    if (n <= 1)
        return n;
    else
        return n + sumOfN(n - 1);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    int sum = sumOfN(n);
    printf("Sum of the first %d natural numbers: %d\n", n, sum);

    return 0;
}
