#include<stdio.h>
#include<conio.h>

int Percentage( int iNo1, int iNo2 )
{
                float fPer = 0.0;

                fPer = (iNo2 * 100) / iNo1 ;

                return fPer;
}

int main()
{
                int iValue1 = 0, iValue2 = 0;
                float fRet = 0.0;

                printf("\n Enter Total Marks => ");
                scanf("%d",&iValue1);

                printf("\n Enter Obtained Marks => ");
                scanf("%d",&iValue2);

                fRet = Percentage( iValue1, iValue2 );

                printf("\n Percentage Is => %0.2f\n",fRet);

                return 0;
}
