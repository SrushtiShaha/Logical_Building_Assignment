/// Consider Value Of PI As 3.14 [ Area = PI * Radius * Radius ]

#include<stdio.h>
#include<conio.h>

double CircleArea( float fRadius )
{
                double Ans = 0.0;
                double PI = 3.14;

                Ans = PI * ( fRadius * fRadius );

                return Ans;
}

int main()
{
                float fValue = 0.0;
                double dRet = 0.0;

                printf("\n Enter Radius => ");
                scanf("%f",&fValue);

                dRet = CircleArea( fValue );

                printf("\n Area Of Circle Is => %lf \n",dRet);

                return 0;
}
