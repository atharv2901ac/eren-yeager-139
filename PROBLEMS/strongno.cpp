#include <stdio.h>

int main() {
    int num, original, digit, sum = 0, fact, i;

    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;

        fact = 1;  
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;

        num = num / 10;
    }

    if (sum == original)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}