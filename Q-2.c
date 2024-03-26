//Q.2 Write a Program to find if a given number is neutral or not using a ladder if else.

#include <stdio.h>

int main() 
{
    int num;

    // Input the number
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is neutral, positive, or negative
    
    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is neutral (zero).\n");
    }    
}
