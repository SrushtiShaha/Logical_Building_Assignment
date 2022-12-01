/// Consider 1$ As 70 Rupees.

#include<stdio.h>
#include<conio.h>

int DollarToINR( int iNo )
{
                int i = 70;

                if( i > 0 )
                {
                                i = iNo * i;
                }

                return i;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter Number Of USD => ");
                scanf("%d",&iValue);

                iRet = DollarToINR( iValue );

                printf("\n Value Of INR Is -> %d\n",iRet);

                return 0;
}
