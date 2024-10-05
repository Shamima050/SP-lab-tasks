#include <stdio.h>

int main() {
    int score, grade;

    printf("Enter the score (0-100): ");
    scanf("%d", &score);

    grade = score / 10; //TO CLSSIFY IT IN 10 CASES

    /* switch (grade) {
      
        case 10:  // CASE 10,Scores 100
        case 9: 
            printf("Grade: A+\n");
            break;
        case 8:   // Scores 80-89
            printf("Grade: A+\n");
            break;
        case 7:   // Scores 70-79
            printf("Grade: A\n");
            break;
         case 6:   // Scores 60-69
            printf("Grade:A-\n");
            break; 
        case 5:   // Scores 50-59
            printf("Grade:B\n");
            break;
        case 4:   // Scores 40-49
            printf("Grade:C\n");
            break;
        case 3:   // Scores 33-39
            printf("Grade:D\n");
            break;
            
        default:  // Scores below 33
            printf("Grade: F\n");
            }
            */



      switch (grade) {
        case 10:  // CASE 10,Score 100
        case 9:   // Scores 90-99
            printf("Grade: A\n");
            break;
        case 8:   // Scores 80-89
            printf("Grade: B\n");
            break;
        case 7:   // Scores 70-79
            printf("Grade: C\n");
            break;
        case 6:   // Scores 60-69
            printf("Grade: D\n");
            break;
        default:  // Scores below 60
            printf("Grade: F\n");
    }
    
    return 0;
}
