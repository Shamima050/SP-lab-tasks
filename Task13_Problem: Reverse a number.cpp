#include <stdio.h>

int main() {
    int number, digit, negative;
    int reversed = 0;


    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if (number < 0) {
        number = -number;
    }


    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    
    if (Negative) {
        reversed = -reversed;
    }
    
    printf("Reversed integer: %d", reversed);

    
    
    return 0;
}
