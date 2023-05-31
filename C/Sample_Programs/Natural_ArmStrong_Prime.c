#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int count = 0;
    int num = 0;

    printf("First 5 natural numbers that are Armstrong as well as prime:\n");

    while (count < 5) {
        num++;
        if (isPrime(num) && isArmstrong(num)) {
            printf("%d ", num);
            count++;
        }
    }

    printf("\n");

    return 0;
}

