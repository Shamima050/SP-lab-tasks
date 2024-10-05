#include <stdio.h>

int main() {
    float p, q, r;

    printf("Enter the length of side p: ");
    scanf("%f", &p);
    printf("Enter the length of side q: ");
    scanf("%f", &q);
    printf("Enter the length of side r: ");
    scanf("%f", &r);

    if (p + q > r && p + r > q && q + r > p) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.");
    }


    return 0;
}
