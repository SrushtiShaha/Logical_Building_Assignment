#include<stdio.h>
#include<conio.h>

int RangeDisplayEven( int iStart, int iEnd )
{
            while( iStart < iEnd )
            {
                        if( iStart % 2 == 0 )
                        {
                                        printf("\t %d",iStart);
                        }

                        iStart++;
            }

            printf("\n Invalid Range");

}

int main()
{
            int iValue1 = 0, iValue2 = 0;

            printf("\n Enter Starting Point => ");
            scanf("%d",&iValue1);

            printf("\n Enter Ending Point => ");
            scanf("%d",&iValue2);

            RangeDisplayEven( iValue1, iValue2 );

            return 0;
}
