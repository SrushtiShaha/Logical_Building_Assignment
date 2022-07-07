#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

int ChkGreater( int iNo )
{
                if( iNo > 100 )
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
                int iValue = 0, bRet = 0;

                printf("\n Please Enter Number => ");
                scanf("%d",&iValue);

                bRet = ChkGreater( iValue );

                if( bRet == 1 )
                {
                                printf("\n Greater \n");
                }
                else
                {
                                printf("\n Smaller \n");
                }

                return 0;
}
