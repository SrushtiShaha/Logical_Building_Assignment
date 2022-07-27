#include<stdio.h>
#include<conio.h>

int CountFour( int iNo )
{
                int iRes = 0, FCount = 0;

                while( iNo > 0 )
                {
                                iRes = iNo % 10;

                                if( iRes == 4 )
                                {
                                                FCount++;
                                }

                                iNo = iNo / 10;
                }

                return FCount;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                iRet = CountFour( iValue );

                printf("\n %d \n ",iRet);

                getch();
                return 0;
}
