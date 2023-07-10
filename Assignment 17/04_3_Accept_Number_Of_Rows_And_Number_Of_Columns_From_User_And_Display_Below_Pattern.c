// 04_Accept_Number_Of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern.
// Input :  iRow = 5 iCol = 5
// Output :  1  2  3  4  5
//          -1 -2 -3 -4 -5
//           1  2  3  4  5
//          -1 -2 -3 -4 -5
//           1  2  3  4  5

#include<stdio.h>
#include<conio.h>

void Pattern(int iRow, int iCol)
{
        int i = 0, j = 0, iR = 1, iC = -1;

        for( i = 1; i <= iRow; i++ )
        {
                for( j = 1; j <= iCol; j++ )
                {
                        if( i % 2 != 0 )
                        {
                                printf(" %3d", iR);

                                iR++;

                                if( iR > iRow )
                                {
                                        iR = 1;
                                }
                        }
                        else if( i % 2 == 0 )
                        {
                                printf("  %2d", iC);

                                iC--;

                                if( iC < ( -iCol ) )
                                {
                                        iC = -1;
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
