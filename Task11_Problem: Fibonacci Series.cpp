#include<stdio.h>


int main(){
    int n1=0, n2=1, n3, i, num;
    printf("enter the number of terms to be printed\n");
    scanf("%d", &num);
    
    printf("%d\n%d\n", n1, n2);
    
    for(i=3;i<=num;i++) {
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }

     return 0;
}
