#include <stdio.h>

int main() {
    char operator;
    double N1, N2, result;

    printf("Enter an operator among + - * /: ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &N1, &N2);

    switch (operator) {

        case '+':
            result = N1 + N2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", N1, N2, result);
            break;

        case '-':
            result = N1 - N2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", N1, N2, result);
            break;

        case '*':
            result = N1 * N2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", N1, N2, result);
            break;

        case '/':
            if (N2 != 0) {
                result = N1 / N2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", N1, N2, result);

            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
    }



    return 0;
}
