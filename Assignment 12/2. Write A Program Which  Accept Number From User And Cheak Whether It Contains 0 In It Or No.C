#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

int ChkZero( int iNo )
{
                int iRes = 0, ZCnt = 0;

                while( iNo > 0 )
                {
                                iRes = iNo % 10;

                                if( iRes == 0 )
                                {
                                                ZCnt++;
                                }

                                iNo = iNo / 10;
                }

                if( ZCnt > 0 )
                {
                                return 1;
                }
                else
                {
                                return 0;
                }
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter Number => ");
                scanf("%d",&iValue);

                iRet = ChkZero( iValue );

                if( iRet == 1 )
                {
                                printf("\n It Contains Zero. \n");
                }
                else
                {
                                printf("\n There Is No Zero. \n");
                }

                getch();
                return 0;
}
