#include <stdio.h>

int main() {
    int n, original, num, digit;
    int count = 0, sum = 0, i, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    num = n;

    // Step 1: count digits
    while (num > 0) {
        count++;
        num = num / 10;
    }

    num = n;  // reset number

    // Step 2: calculate Armstrong sum
    while (num > 0) {
        digit = num % 10;
        power = 1;

        // compute digit^count
        for (i = 1; i <= count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        num = num / 10;
    }

    // Step 3: check
    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
