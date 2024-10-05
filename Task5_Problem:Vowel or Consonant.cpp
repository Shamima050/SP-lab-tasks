#include <stdio.h>

int main() {
    char N;
    int Vowel = 0;
    printf("Enter a character: ");
    scanf("%c", &N);


    switch(N) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            Vowel = 1;
            break;
        default:
            Vowel = 0;
    }

    if (Vowel == 1)
        printf("%c is a vowel.\n", N);
    else
        printf("%c is a consonant.\n", N);

    return 0;
}
