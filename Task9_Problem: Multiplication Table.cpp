#include<stdio.h>

int main(){
    int N;
    int i;
    printf("Enter the number: ");
    scanf("%d", &N);

    for(i=1; i<=10; i++) {
        printf("%d x %d= %d\n", N, i, N*i);
    }

    return 0;
}
