#include<stdio.h>

int main()
{
    int p,q,r;
    printf("enter the numbers: ");
    scanf("%d%d%d", &p, &q, &r);

    if(p>q && p>r){
        printf("%d is the Largest of Three Numbers", p);
    }
    else if(q>p && q>r) {
        printf("%d is the Largest of Three Numbers", q);
    }
    else {
        printf("%d is the Largest of Three Numbers", r);
    }
    return 0;
}
