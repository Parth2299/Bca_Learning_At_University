//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

#include <stdio.h>

int main() {
    int num, i = 0;
    
    printf("Enter a number divisible by 8 (0 to stop): ");
    scanf("%d", &num);
    
    while (num != 0 && num % 8 == 0) {
        i++;
        printf("Valid number entered. Enter another number divisible by 8 (0 to stop): ");
        scanf("%d", &num);
    }
    
    printf("You entered %d valid number(s).\n", i);
    
    return 0;
}
