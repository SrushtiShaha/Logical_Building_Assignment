/// Size - 5 ->  * * * * * # # # # #

#include<stdio.h>
#include<conio.h>

void Display( int iNo )
{
                int i = 0;

                if( iNo < 0 )
                {
                                iNo = 0 - iNo;
                }

                for( i = 1; i <= iNo; i++ )
                {
                                printf(" * \t");

                                if( i == iNo )
                                {
                                                for( i = 1; i <= iNo; i++ )
                                                {
                                                                printf(" # \t");

                                                }
                                }
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                Display( iValue );

                return 0;
}
