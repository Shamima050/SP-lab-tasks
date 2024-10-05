#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);

    if (N % 4 == 0) {
        if (N % 100 == 0) {
            if (N % 400 == 0) {
                printf("%d is a leap year.\n", N);
            } else {
                printf("%d is not a leap year.\n", N);
            }
        } else {
            printf("%d is a leap year.\n", N);
        }
    } else {
        printf("%d is not a leap year.\n", N);
    }

    return 0;
}

