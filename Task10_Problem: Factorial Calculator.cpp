#include <stdio.h>

int main() {
    int n;
    int factorial = 1, i = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    //when number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        
        while (i <= n) {
            factorial *= i;  
            i++; 
        }

        printf("The factorial of %d is: %d\n", n, factorial);
    }

    return 0;
}


