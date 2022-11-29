/// 1. Write A Program Which Accept Number From User And If Number Is Less Than 50 Then Print Small, If It Is Greater Than 50 And Less Than 100 Then Print Medium, If It Is Greater Than 100 Then Print Larger.

#include<stdio.h>
#include<conio.h>

void Number( int iNo )
{
                if( iNo < 50 )
                {
                                printf("\n Small \n");
                }
                else if( iNo >= 50 && iNo < 100 )
                {
                                printf("\n Medium \n");
                }
                else
                {
                                printf("\n Larger \n");
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter Number => ");
                scanf("%d",&iValue);

                Number( iValue );

                return 0;
}
