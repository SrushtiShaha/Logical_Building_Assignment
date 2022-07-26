#include<stdio.h>
#include<conio.h>

void RangeDisplayRev( int iStart, int iEnd )
{
                if( iStart > iEnd )
                {
                                printf("\n Invalid Range.");
                                goto DOWN;
                }

                while( iStart <= iEnd )
                {
                                printf(" %d \t ",iEnd);
                                iEnd--;
                }

                DOWN:

                return;
}

int main()
{
                int iValue1 = 0, iValue2 = 0;

                printf("\n Enter Starting Point => ");
                scanf("%d",&iValue1);

                printf("\n Enter Ending Point => ");
                scanf("%d",&iValue2);

                RangeDisplayRev( iValue1, iValue2 );

                getch();
                return 0;
}
