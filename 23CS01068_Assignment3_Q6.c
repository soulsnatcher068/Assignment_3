// Write a C program to check whether a given number is Kaprekar Number. A
// Kaprekar number is a number if its square can be divided into two parts in a way
// so that the sum of parts is equal to the original number and none
// of the parts has value 0.
// [5 mark]
// Example: 45
// 45^2 = 2025 = 20 + 25 = 45
// Yes; 45 is Kaprekar number
#include<stdio.h>
void main()
{
    int x,y,j,t;
    printf("\nEnter number = ");
    scanf("%d",&x);
    y=x*x;
    int i;
    for(i=1;y!=0;i++) y/=10;
    // printf("\n%d",y);
    y=x*x;
    // printf("\n%d",i);
    t=10;

    for(j=1;j<i;j++)
    {
        int a,b;
        a=y/t;
        b=y%t;
        if(x==a+b) {
            printf("\nIt is a kaprekar number");
            break;
        }
        else t*=10;
    }
    // printf("\n%d",j);
    if(i==j) printf("\nThe number is not a Kaprekar number");
    
}
