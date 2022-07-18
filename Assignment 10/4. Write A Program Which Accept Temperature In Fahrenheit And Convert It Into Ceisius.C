/// 1 Ceisius = ( Fahrenheit - 32 ) * ( 5 / 9 )

#include<stdio.h>
#include<conio.h>

double FhtoCs( float fTemp )
{
                double Ans = 0.0;

                if( fTemp > 0 )
                {
                                Ans = ( fTemp - 32 ) * ( 5 / 9 );
                }

                return Ans;
}

int main()
{
                float fValue = 0.0;
                double dRet = 0.0;

                printf("\n Enter Temperature In Fahrenheit => ");
                scanf("%f",&fValue);

                dRet = FhtoCs( fValue );

                printf("\n Ceisius => %lf \n",dRet);

                return 0;
}
