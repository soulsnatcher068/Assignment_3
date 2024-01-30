//Determination if a,b,c constitute sides of a triangle or not
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("\n Enter three positive numbers = ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b) printf("\nTriangle is possible");
    else printf("\nTriangle is not possible");
}