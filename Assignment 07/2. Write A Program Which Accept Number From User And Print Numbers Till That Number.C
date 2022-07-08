#include<stdio.h>
#include<conio.h>

void Display( int iNo )
{
                int i = 0;

                for( i = 1; i <= iNo; i++ )
                {
                                printf("\t %d ",i);
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
