#include<stdio.h>
#include<conio.h>

void FactRev( int iNo )
{
                int i = 0, Ans = 0;

                for( i = iNo; i > 0; i-- )
                {
                                if( iNo % i == 0 && iNo != i )
                                {
                                                Ans = i;

                                                printf("\n %d \n",Ans);
                                }
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                FactRev( iValue );

                return 0;
}
