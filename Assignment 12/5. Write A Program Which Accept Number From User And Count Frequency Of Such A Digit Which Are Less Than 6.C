#include<stdio.h>
#include<conio.h>

int Count( int iNo )
{
                int iRes = 0, NCount = 0;

                while( iNo > 0 )
                {
                                iRes = iNo % 10;

                                if( iRes < 6 )
                                {
                                                NCount++;
                                }

                                iNo = iNo / 10;
                }

                return NCount;
}

int main()
{
                int iValue = 0, iRet = 0;

                printf("\n Enter A Number => ");
                scanf("%d",&iValue);

                iRet = Count( iValue );

                printf("\n %d \n",iRet);

                getch();
                return 0;
}
