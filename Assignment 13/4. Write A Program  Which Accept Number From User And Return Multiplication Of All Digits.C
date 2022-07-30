#include<stdio.h>
#include<conio.h>

int MultiDigits( int iNo )
{
                int iRes = 1, i = 1;

                while( iNo > 0 )
                {
                                i = iNo % 10;

                                if( i == 0 )
                                {
                                                goto DOWN;
                                }

                                iRes = i * iRes;

                                DOWN:

                                    iNo = iNo / 10;
                }

                return iRes;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                iRet = MultiDigits( iValue );

                printf("\n %d \n",iRet);

                getch();
                return 0;
}
