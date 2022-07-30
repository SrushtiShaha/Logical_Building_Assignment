#include<stdio.h>
#include<conio.h>

int CountDiff( int iNo )
{
                int iRes = 1, Even = 1, Odd = 1;

                while( iNo > 0 )
                {
                                iRes = iNo % 10;

                                if( iRes % 2 == 0 )
                                {
                                                Even = iRes + Even;
                                }
                                else
                                {
                                                Odd = iRes + Odd;
                                }

                                iNo = iNo / 10;
                }

                return iRes = Even - Odd;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                iRet = CountDiff( iValue );

                printf("\n %d \n",iRet);

                getch();
                return 0;
}
