// 3. Accept_Number_Of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern.
// Input  : iRow = 5 iCol = 5
// Output : a b c d e
//          1 2 3 4 5
//          a b c d e
//          1 2 3 4 5
//          a b c d e

#include<stdio.h>
#include<conio.h>

void Pattern( int iRow, int iCol )
{
        int i = 0, j = 0, iCnt = 0;
        char ch = '\0';

        for( i = 1, iCnt = 1, ch = 'a'; i <= iRow; i++ )
        {
                for( j = 1; j <= iCol; j++ )
                {
                        if( i % 2 != 0 )
                        {
                                printf(" %c ", ch);

                                ch++;

                                if( ch > 101 )
                                {
                                        ch = 'a';
                                }
                        }
                        else if( i % 2 == 0 )
                        {
                                printf(" %d ", iCnt);

                                iCnt++;

                                if( iCnt > iRow )
                                {
                                        iCnt = 1;
                                }
                        }
                }

                printf("\n");
        }

}

int main()
{
        int iValue1 = 0, iValue2 = 0;

        printf("\n Enter Number Of Rows And Columns -> ");
        scanf("%d%d",&iValue1,&iValue2);

        Pattern( iValue1, iValue2 );

        getch();
        return 0;
}
