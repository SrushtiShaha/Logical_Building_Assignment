#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 2

int ChkEqual( int iNo1, int iNo2 )
{
                if( iNo1 == iNo2 )
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
                int iValue1 = 0, iValue2 = 0, bRet = 0;

                printf("\n Please Enter Two Numbers => ");
                scanf("%d%d",&iValue1,&iValue2);

                bRet = ChkEqual( iValue1, iValue2 );

                if( bRet == 1 )
                {
                                printf("\n Equal \n");
                }
                else
                {
                                printf("\n Not Equal \n");
                }

                return 0;
}
