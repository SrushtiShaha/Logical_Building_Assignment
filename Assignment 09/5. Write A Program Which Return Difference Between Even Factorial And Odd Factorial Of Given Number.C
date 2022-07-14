#include<stdio.h>
#include<conio.h>

int FactorialDiff( int iNo )
{
                int i = 0, Even = 0, Odd = 0;

                if( iNo < 0 )
                {
                                iNo = 0 - iNo;
                }

                for( i = 1, Even = 1, Odd = 1; i <= iNo; i++ )
                {
                                if( i % 2 == 0 )
                                {
                                                Even = i * Even;
                                }
                                else
                                {
                                                Odd = i * Odd;
                                }
                }

                i = Even - Odd;

                return i;


}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number -> ");
                scanf("%d",&iValue);

                iRet = FactorialDiff( iValue );

                printf("\n Factorial Difference Is => %d\n",iRet);

                return 0;
}
