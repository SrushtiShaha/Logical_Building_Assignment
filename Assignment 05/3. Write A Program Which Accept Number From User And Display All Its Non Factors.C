#include<stdio.h>
#include<conio.h>

void NonFact( int iNo )
{
                int i = 0;

                if( iNo <= 0 )
                {
                                return;
                }

                for( i = 1; i <= iNo; i++ )
                {
                                if( iNo % i != 0 )
                                {
                                                printf("\n %d \n",i);
                                }
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                NonFact( iValue );

                return 0;
}
