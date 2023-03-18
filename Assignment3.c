//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include <stdio.h>

int main() {
    int a, b = 0, c = 1, rem;
    
    printf("Enter a decimal number: ");
    scanf("%d", &a);
    
    while (a > 0) {
        rem = a % 2;
        b = b + rem * c;
        a = a / 2;
        c = c * 10;
    }
    
    printf("Binary equivalent: %d\n", b);
    
    return 0;
}
