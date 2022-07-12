#include<stdio.h>
#include<conio.h>

void Table( int iNo )
{
                int i = 0, Temp = 0;

                if( iNo <= 0 )
                {
                                iNo = 0 - iNo;
                }

                for( i = 1; i <= 10; i++ )
                {
                                Temp = iNo * i;
                                printf("%d \t",Temp);
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Number -> ");
                scanf("%d",&iValue);

                Table( iValue );

                return 0;
}

