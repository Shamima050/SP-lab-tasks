#include <stdio.h>

int main() {
    int n, i;
    int sum=0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");


    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); //storing the elements
    }


    for (i = 0; i < n; i++) {
        sum += arr[i]; //summation of elements
    }

    printf("The sum of the array elements is: %d\n", sum);
    return 0;
