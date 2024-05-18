// Absolute Beginner's Guide to C, 3rd Edition
// Chapter 4 Example 1--Chapter4ex1.c
#include <stdio.h>

int main() {

    /* These three lines show you how to use the most popular Escape Sequences */
    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces    \b\b\b\b can be fixed with the ");
    printf("\\%c Escape character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep a few beeps.\n\n\n");
    printf("%s %c. ", "You are kicking butt learning", 'C');
    printf("You have finished chapter %d. \nYou have finished ", 4);
    printf("%.1f%c of the book.\n", 12.500, '%');

    return 0;
}
