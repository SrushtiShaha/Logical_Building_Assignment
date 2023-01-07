#include<stdio.h>
#include<conio.h>

int CountTwo( int iNo )
{
                int iRes = 0, iCnt = 0;

                while( iNo > 0 )
                {
                                iRes = iNo % 10;

                                if( iRes == 2 )
                                {
                                                iCnt++;
                                }

                                iNo = iNo / 10;
                }

                return iCnt;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter Number => ");
                scanf("%d",&iValue);

                iRet = CountTwo( iValue );

                printf("\n %d \n", iRet);

                getch();
                return 0;
}
