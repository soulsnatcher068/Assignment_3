//given three points in x-y plane ,determination if they are collinear or not 
#include<stdio.h>
void main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("\nEnter coordinate of first point (x1,y1) = ");
    scanf("%d %d",&x1,&y1);
    printf("\nEnter coordinate of second point (x2,y2) = ");
    scanf("%d %d",&x2,&y2);
    printf("\nEnter coordinate of third point (x3,y3) = ");
    scanf("%d %d",&x3,&y3);
    //we will use the concept that area of triangle for collinear points is 0.
    if( x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)==0) printf("\nThe given points are collinear");
    else printf("\nThe given points are not collinear");
}