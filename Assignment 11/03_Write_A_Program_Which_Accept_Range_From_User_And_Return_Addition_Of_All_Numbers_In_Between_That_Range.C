///  Range Should Contains Positive Numbers Only.

#include<stdio.h>
#include<conio.h>

int RangeSum( int iStart, int iEnd )
{
            int iAns = 0;

            if( iStart < 0 || iEnd < 0 || iStart > iEnd )
            {
                        printf("\n Invalid Range.");
                        return 0;
            }

            iAns = 0;

            while( iStart <= iEnd )
            {
                        iAns = iStart + iAns;
                        iStart++;
            }

            return iAns;
}

int main()
{
            int iValue1 = 0, iValue2 = 0,iRet = 0;

            printf("\n Enter Starting Point => ");
            scanf("%d",&iValue1);

            printf("\n Enter Ending Point => ");
            scanf("%d",&iValue2);

            iRet = RangeSum( iValue1, iValue2 );

            if( iRet == 0 )
            {
                        goto DOWN;
            }

            printf("\n Addition Is => %d",iRet);

            DOWN:

            getch();
            return 0;
}
