#include<stdio.h>
#include<conio.h>

int MultFact( int iNo )
{
                int i = 0, Ans = 1;

                if( iNo <= 0 )
                {
                                return;
                }

                for( i = 1; i < iNo; i++ )
                {
                                if( iNo % i == 0 )
                                {
                                                Ans = i * Ans;
                                }
                }

                return Ans;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                iRet = MultFact( iValue );

                printf("\n %d \n",iRet);

                return 0;
}
