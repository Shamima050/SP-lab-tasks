#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Enter the integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n"); //factorial for negative number
    }
     else {
        for (int i = n; i > 0; i--) {
            factorial *= i;  // n(n-1)(n-2)....
        }

    
        printf("The factorial of %d is: %d\n", n, factorial);
    }

    return 0;
}
