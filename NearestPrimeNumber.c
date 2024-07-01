#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is the nearest prime number\n", number);
        return 0;
    }

    int n;
    char flag = 0;
    if (number % 6 > 1)
        n = (number / 6) + 1;
    else {
        n = (number / 6);
        flag = 1;
    }

    while (true) {
        if (isPrime((6 * n) - 1)) {
            if (flag == 1) {
                flag = 0;
            } else {
                int z = (6 * n) - 1;
                printf("The nearest prime number is %d\n", z);
                return 0;
            }
        }
        if (isPrime((6 * n) + 1)) {
            printf("The nearest prime number is %d\n", (6 * n) + 1);
            return 0;
        }
        n += 1;
    }
}
