//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include <stdio.h>

int main() {
    int n, num, a = 0, b = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if (num > 0) {
            a++;
        } else if (num < 0) {
            b++;
        }
    }
    
    printf("Total positive numbers: %d\n", a);
    printf("Total negative numbers: %d\n", b);
    
    return 0;
}
