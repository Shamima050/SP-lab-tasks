#include <stdio.h>

int main() {
    int number;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);


    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        count = 1;
    }
else {

        while (number != 0) {
            number = number / 10;
            count++;
        }
    }

    printf("Number of digits: %d", count);
    return 0;
}
