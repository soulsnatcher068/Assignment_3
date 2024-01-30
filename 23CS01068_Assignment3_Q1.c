// Write a C program that takes an integer input from the user and [2 Mark]
// determines whether the entered number is positive, negative, or zero.
// Display a message indicating the result.
#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter number = ");
    scanf("%d",&n);
    if(n>0) printf("\n %d is positive",n);
    else if( n==0 ) printf("\n %d is zero",n);
    else printf("%d is negative",n);

}