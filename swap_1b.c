// C program to swap two variables
#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter Value of x: ");
    scanf("%d",&x);
    printf("\nEnter Value of y: ");
    scanf("%d",&y);

    // Using a temporary variable to swap the values
    // Store the value of y in a temporary variable
    int temp=y;

    // Assign the value of x to y
    y=x;

    // Assign the value stored in the temporary variable to x
    x=temp;

    printf("\nAfter Swapping: x=%d, y=%d",x,y);

    return 0;
}
