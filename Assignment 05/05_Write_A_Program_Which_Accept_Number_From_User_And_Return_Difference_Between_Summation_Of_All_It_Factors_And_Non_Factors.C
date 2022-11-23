#include<stdio.h>
#include<conio.h>

int FactDiff( int iNo )
{
                int i = 0, Fact = 0, NonFact = 0;

                for( i = 1; i < iNo; i++ )
                {
                                if( iNo % i == 0 )
                                {
                                                Fact = i + Fact;
                                }
                }

                printf("\n Factors = %d \n",Fact);

                for( i = 1; i < iNo; i++ )
                {
                                if( iNo % i != 0 )
                                {
                                                NonFact = i + NonFact;
                                }
                }

                printf("\n NonFactors = %d \n",NonFact);

                return Fact - NonFact;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                iRet = FactDiff( iValue );

                printf("\n Summation = %d \n",iRet);

                return 0;
}
