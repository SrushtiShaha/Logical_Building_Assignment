#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int Cheak( int iNo )
{
                if( (iNo % 5) == 0 )
                {
                                return TRUE;
                }
                else
                {
                                return FALSE;
                }
}

int main()
{
                int iValue = 0;
                BOOL bRet = FALSE;

                printf("\n Enter A Number : ");
                scanf("%d",&iValue);

                bRet = Cheak(iValue);

                if( bRet == TRUE )
                {
                                printf("\n Number Is Divisible By 5.\n");
                }
                else
                {
                                printf("\n Number Is Not Divisible By 5.\n");
                }

                getch();
                return 0;
}
