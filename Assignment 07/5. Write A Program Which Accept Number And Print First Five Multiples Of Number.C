#include<stdio.h>
#include<conio.h>

void MultipleDisplay( int iNo )
{
                int i = 0, Temp = 0;

                for( i = 1; i <= 5; i++ )
                {
                                Temp = i * iNo;

                                printf("\t %d ",Temp);
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter Number => ");
                scanf("%d",&iValue);

                MultipleDisplay( iValue );

                return 0;
}
