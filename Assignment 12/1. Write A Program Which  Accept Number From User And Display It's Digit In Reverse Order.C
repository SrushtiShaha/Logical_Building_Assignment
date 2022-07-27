#include<stdio.h>
#include<conio.h>

void DisplayDigit( int iNo )
{
            int iDigit = 0;

            if( iNo < 0 )
            {
                        iNo = 0 - iNo;          ///iNo =-iNo;
            }

            while( iNo > 0 )
            {
                        iDigit = iNo % 10;

                        printf("\n %d \n ",iDigit);

                        iNo = iNo / 10;
            }

            return;
}

int main()
{
            int iValue = 0;

            printf("\n Enter A Number => ");
            scanf("%d",&iValue);

            DisplayDigit( iValue );

            getch();
}
