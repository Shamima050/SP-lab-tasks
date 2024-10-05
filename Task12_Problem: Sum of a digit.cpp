#include <stdio.h>

int main() {
    int number, digit;
    int sum=0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;
        sum += digit;

        number /= 10;
    }


    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
