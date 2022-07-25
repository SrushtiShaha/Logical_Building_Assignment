#include<stdio.h>
#include<conio.h>

void RangeDisplay( int iStart, int iEnd )
{
                if( iStart > iEnd )
                {
                                printf("\n Invalid Range ");
                }

                while( iStart <= iEnd )
                {
                                printf(" %d \t",iStart);
                                iStart++;
                }

                return;
}

int main()
{
                int iValue1 = 0, iValue2 = 0;

                printf("\n Enter Starting Point => ");
                scanf("%d",&iValue1);

                printf("\n Enter Ending Point => ");
                scanf("%d",&iValue2);

                RangeDisplay( iValue1, iValue2 );

                return 0;
}
