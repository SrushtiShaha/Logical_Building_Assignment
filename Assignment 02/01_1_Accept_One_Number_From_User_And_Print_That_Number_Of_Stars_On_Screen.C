#include<stdio.h>
#include<conio.h>

void Display( int iNo )
{
                int iCnt = 0;

                while( iCnt < iNo )
                {
                                printf("\t * ");
                                iCnt++;
                }
}

int main()
{
                int iValue = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                Display(iValue);

                getch();
                return 0;
}
