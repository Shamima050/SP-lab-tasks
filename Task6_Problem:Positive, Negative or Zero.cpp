#include <stdio.h>

int main() {
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);

    if (N>0){
        printf("%d is a Positive number",N);
    }
    else if (N<0){
        printf("%d is a Negative number",N);
    }
    else {
        printf("Zero");
    }
    return 0;
}
