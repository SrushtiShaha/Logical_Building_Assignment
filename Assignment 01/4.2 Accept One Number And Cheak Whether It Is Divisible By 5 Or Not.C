#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

int Cheak(int iNo)
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
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number : ");
                scanf("%d",&iValue);

                iRet = Cheak(iValue);

                if( iRet == TRUE )
                {
                                printf("\n The Given Number %d Is Divisible By 5.\n",iValue);
                }
                else
                {
                                printf("\n The Given Number %d Is Not Divisible By 5.\n",iValue);
                }

                return 0;
}
