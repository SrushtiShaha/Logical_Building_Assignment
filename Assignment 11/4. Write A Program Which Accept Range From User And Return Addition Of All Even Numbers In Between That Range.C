/// Range Should Contain Positive Numbers Only.

#include<stdio.h>
#include<conio.h>

int RangeSumEven( int iStart, int iEnd )
{
                int iRes = 0;

                if( iStart < 0 || iEnd < 0 || iStart > iEnd )
                {
                                printf("\n Invalid Range.");
                                goto DOWN;
                }

                while( iStart <= iEnd )
                {
                                if( iStart % 2 == 0 )
                                {
                                                iRes = iStart + iRes;
                                }
                                iStart++;
                }

                DOWN:

                return iRes;
}

int main()
{
                int iValue1 = 0, iValue2 = 0, iRet = 0;

                printf("\n Enter Starting Point => ");
                scanf("%d",&iValue1);

                printf("\n Enter Ending Point => ");
                scanf("%d",&iValue2);

                iRet = RangeSumEven( iValue1, iValue2 );

                if( iRet == 0 )
                {
                                goto DOWN;
                }

                printf("\n Addition Is => %d",iRet);

                DOWN:

                getch();
                return 0;
}
