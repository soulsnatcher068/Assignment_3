// Write a C program to check whether a given number is Kaprekar Number. A
// Kaprekar number is a number if its square can be divided into two parts in a way
// so that the sum of parts is equal to the original number and none
// of the parts has value 0.
// [5 mark]
// Example: 45
// 45^2 = 2025 = 20 + 25 = 45
// Yes; 45 is Kaprekar number
#include<stdio.h>
#include<math.h>
void main()
{
    int x,y;
    printf("\nEnter number = ");
    scanf("%d",&x);
    y=x*x;
    int i;
    for(i=1;y!=0;i++) y/=10;
    printf("\n%d",y);
    y=x*x;
    printf("\n%d",i);
    
    if(i%2==0) printf("\nNot a Kaprekar number");
    else 
    {
        int a,b;
        b=y/pow(10,i/2);
        a=y-pow(10,i/2)*b;
        printf("\n%d %d",a,b);
        if( x == a+b  && a!=0 && b!=0 ) printf("\nIt is a Kaprekar number");
        else printf("\nIt is not a Kaprekar number");
    }
}