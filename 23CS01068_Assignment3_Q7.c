// Your score of PDS Lab is determined as follows: [5 mark]
// Final Score (T) = Marks obtained (M) X Attendance weight (W)
// Attendance weight (W) = no of classes attended (N) / Total number of classes
// conducted (K).
// Then your grade is decided as follows:
// T >= 90 -> Grade = EX
// T >= 80 and T < 89 -> Grade = A
// T >= 70 and T< 79 -> Grade = B
// T > = 60 and T < 69 -> Grade = C
// T > = 50 and T < 59 -> Grade = D
// T > = 40 and T < 49 -> Grade = P
// T < 40 -> Grade = F
// Read the values of M, N and K such that M is between 0 and 100; N < = K and
// print Final score and Grade in the following format:
// Final Score = 65
// Grade is = C
#include<stdio.h>

void main()
{
    int x,M,N,K;
    x=1;
    while(x)
    {
        printf("\nEnter the marks obtained = ");
        scanf("%d",&M);
        fflush(stdin);
        printf("\nEnter no of classes attended = ");
        scanf("%d",&N);
        fflush(stdin);
        printf("\nEnter total number of classes conducted = ");
        scanf("%d",&K);
        fflush(stdin);
        if ((M>=0 && M<=100) && N<=K ) x=0;
        else printf("\nInvalid Input !!\nEnter again");
    }
    double T,W;
    W=N/(K*1.0);
    T=W*M;
    printf("\nGrade = ");
    if(T>=90) printf("Ex");
    else if(T>=80 && T<89) printf("A");
    else if(T>=70 && T<79) printf("B");
    else if(T>=60 && T<69) printf("C");
    else if(T>=50 && T<59) printf("D");
    else if(T>=40 && T<49) printf("P");
    else printf("F");
}