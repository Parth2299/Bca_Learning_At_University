//Write a C code to find the number of distinct elements in a sorted array.

#include <stdio.h>

int main()
{
    int arr[50], n, i, j = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the sorted array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] != arr[i + 1]) {
            j++;
        }
    }

    printf("The number of distinct elements in the array is: %d", count);

    return 0;
}
