/// 1 Square Feet = 0.0929 Square Meter

#include<stdio.h>
#include<conio.h>

double SquareMeter( int iValue )
{
                double dAns = 0.0;

                dAns = iValue * 0.0929;

                return dAns;
}

int main()
{
                int iValue = 0;
                double dRet = 0.0;

                printf("\n Enter Area Of Square => ");
                scanf("%d",&iValue);

                dRet = SquareMeter( iValue );

                printf("\n Square Meter => %lf \n",dRet);
                
                getch();
                return 0;
}
