// 2. Accept_Number_Of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern.
// Input  : iRow = 4 iCol = 5
// Output : 2 4 6 8 10
//          1 3 5 7 9
//          2 4 6 8 10
//          1 3 5 7 9

#include<stdio.h>
#include<conio.h>

void Pattern( int iRow, int iCol )
{
        int i = 0, j = 0, iR = 2, iC = 1;

        for( i = 1; i <= iRow; i++ )
        {
                for( j = 1; j <= iCol; j++ )
                {
                        if( i % 2 == 0 )
                        {
                                printf(" %3d ", iC);

                                iC += 2;

                                if( iC > 9 )
                                {
                                        iC = 1;
                                }
                        }
                        else if( i % 2 != 0 )
                        {
                                printf(" %3d ", iR);

                                iR += 2;

                                if( iR > 10 )
                                {
                                        iR = 2;
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
