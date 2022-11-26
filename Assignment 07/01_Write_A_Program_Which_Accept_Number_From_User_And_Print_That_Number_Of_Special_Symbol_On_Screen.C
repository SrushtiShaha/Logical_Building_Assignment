/// 1. Write A Program Which Accept Number From User And Print That Number Of $ And * On Screen

#include<stdio.h>
#include<conio.h>

void Pattern( int iNo )
{
                while( iNo > 0 )
                {
                                printf("\t $ \t * ");
                                iNo--;
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                Pattern( iValue );

                return 0;
}
