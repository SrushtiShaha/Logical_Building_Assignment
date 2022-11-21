#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

int Cheak( int iNo )
{
                if( iNo % 2 == 0 )
                {
                                return 1;
                }
                else
                {
                                return 0;
                }
}

int main()
{
                int iValue = 0, Ret = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                Ret = Cheak( iValue );

                if( Ret == 1 )
                {
                                printf("\n The Given Number %d Is Even.\n",iValue);
                }
                else
                {
                                printf("\n The Given Number %d Is Odd.\n",iValue);
                }

                return 0;
}
