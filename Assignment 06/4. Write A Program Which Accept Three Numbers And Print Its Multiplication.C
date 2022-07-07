#include<stdio.h>
#include<conio.h>

int Multiply( int iNo1, int iNo2, int iNo3 )
{
                int iTot = 0;

                if( iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
                {
                                printf("\n Please Don't Enter Zero [0]...\n");
                                goto Down;
                }

                iTot = iNo1 * iNo2 * iNo3;

                Down:

                return iTot;
}

int main()
{
                int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

                printf("\n Enter Three Numbers => ");
                scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

                iRet = Multiply( iValue1, iValue2, iValue3 );

                printf("\n Multiplication Of %d * %d * %d Is => %d.\n",iValue1,iValue2,iValue3,iRet);

                return 0;
}
