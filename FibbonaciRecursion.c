#include <stdio.h>

int fibo(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibo(num - 1) + fibo(num - 2);
}

int main() {
    int num;
    int fibonacci;

    printf("Enter any number to find the nth Fibonacci term: ");
    scanf("%d", &num);

    fibonacci = fibo(num);
    printf("%dth Fibonacci term is %d\n", num, fibonacci);

    return 0;
}
