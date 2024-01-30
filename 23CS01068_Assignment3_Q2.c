//Determination of largest of three numbers among three numbers
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("\nEnter x , y , z =");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y) 
    {
        if(x>z) printf("\n%d is the largest",x);
        else printf("\n%d is the largest",z);
    }
    else
    {
        if(y>z) printf("\n%d is the largest",y);
        else printf("%d is the largest",z);
    }
}