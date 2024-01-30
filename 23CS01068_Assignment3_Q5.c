// A library charges a fine for every book returned late.For first 5 days the fine is 1
// rupee, for 6-10 days the fine is 2 rupees and above 10 days the fine is 5 rupees.
// If you return the book after 30 days your membership will be canceled. Write a
// program to accept the number of days the member is late to return the book and
// display the fine or the appropriate message.
#include<stdio.h>
void main()
{
    int fine=0,dl;
    printf("\nNumber of days late = ");
    scanf("%d",&dl);
    if(dl == 0) printf("Thank You !!\nFine =%d",fine);
    else
    {   
        //fine calculation
        if(dl>=1 && dl<=5) printf("\nFine =%d",fine+=dl);
        else if(dl>=6 && dl<=10) printf("\nFine = %d",fine+= 5*1 + (dl-5)*2);
        else if(dl>=11 && dl<=30) printf("\nFine = %d",fine+= 5*1 + 5*2 + (dl-10)*5 );
        else printf("\nMembership cancelled !! Please pay fine = %d ",fine+= 5*1 + 5*2 + (dl-10)*5) ;
    }
}    