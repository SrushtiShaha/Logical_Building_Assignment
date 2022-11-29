#include<stdio.h>
#include<conio.h>

void TableRev( int iNo )
{
                int i = 0, Temp = 0;

                if( iNo < 0 )
                {
                                iNo = 0 - iNo;
                }

                Temp = iNo * 10;

                for( i = 10; i > 0; i-- )
                {
                                printf("%d \t",Temp);

                                Temp = Temp - iNo;
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                TableRev( iValue );

                return 0;
}
