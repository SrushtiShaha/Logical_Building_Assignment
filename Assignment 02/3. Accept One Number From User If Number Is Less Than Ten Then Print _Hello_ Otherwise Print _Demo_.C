#include<stdio.h>
#include<conio.h>

void Display( int iNo )
{
                if( iNo < 10 )
                {
                                printf("\n Hello \n");
                }
                else
                {
                                printf("\n Demo \n");
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
