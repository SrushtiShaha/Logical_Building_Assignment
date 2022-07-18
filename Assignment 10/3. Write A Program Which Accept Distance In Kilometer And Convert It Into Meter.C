/// 1 Kilometer = 1000 Meter

#include<stdio.h>
#include<conio.h>

int KMtoMeter( int iNo )
{
                int iAns = 0;

                iAns = iNo * 1000;

                return iAns;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter Distance => ");
                scanf("%d",&iValue);

                iRet = KMtoMeter( iValue );

                printf("\n Meter => %d \n",iRet);

                return 0;
}
