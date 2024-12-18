#include <stdio.h>

int main() {
    // Variable declarations with short names
    float p, c, b, m, comp, tot, perc;
    char grade;

    // Input marks for each subject
    printf("Enter marks for Physics: ");
    scanf("%f", &p);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &c);

    printf("Enter marks for Biology: ");
    scanf("%f", &b);

    printf("Enter marks for Mathematics: ");
    scanf("%f", &m);

    printf("Enter marks for Computer: ");
    scanf("%f", &comp);

    // Calculate total and percentage
    tot = p + c + b + m + comp;
    perc = (tot / 5);

    // Determine grade based on percentage
    if (perc >= 95) {
        grade = 'A';
    } else if (perc >= 85) {
        grade = 'B';
    } else if (perc >= 80) {
        grade = 'C';
    } else if (perc >= 75) {
        grade = 'D';
    } else if (perc >= 60) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Display percentage and grade
    printf("Total Marks: %.2f/500\n", tot);
    printf("Percentage: %.2f%%\n", perc);
    printf("Grade: %c\n", grade);

    return 0;
}
