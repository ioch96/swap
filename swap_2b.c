// C program to swap two numbers without using a third variable
#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping A is %d and B is %d \n", a,b);

    // Swapping without using a third variable
    // Sum of both numbers is stored in 'b'
    b=a+b;

    // Difference of sum and original 'a' is stored in 'a'
    a=b-a;

    // Difference of sum and new 'a' is stored in 'b'
    b=b-a;

    printf("After swapping A is %d and B is %d \n", a,b);

    return 0;
}
