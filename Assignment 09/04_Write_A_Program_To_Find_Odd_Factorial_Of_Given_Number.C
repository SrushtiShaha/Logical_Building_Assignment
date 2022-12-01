#include<stdio.h>
#include<conio.h>

int OddFactorial( int iNo )
{
                int i = 1, Temp = 1;

                if( iNo < 0 )
                {
                                iNo = 0 - iNo;
                }

                while( iNo >= i )
                {
                                if( i % 2 == 1 )
                                {
                                                Temp = i * Temp;
                                }

                                i++;
                }

                return Temp;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                iRet = OddFactorial( iValue );

                printf("\n Odd Factorial Of Given Number %d Is => %d\n",iValue,iRet);

                return 0;
}
