#include<stdio.h>
#include<conio.h>

void DisplayFactor( int iNo )
{
                int i = 0;

                for( i = 1; i <= iNo; i++ )
                {
                                if(iNo % i == 0 )
                                {
                                                printf("\n %d \n ",i);
                                }
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                DisplayFactor( iValue );

                return 0;
}
