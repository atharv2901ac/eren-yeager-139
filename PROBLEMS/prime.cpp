#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a Prime Number");
    } 
    else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("Prime Number");
        else
            printf("Not a Prime Number");
    }

    return 0;
}