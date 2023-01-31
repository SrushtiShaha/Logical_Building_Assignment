// Compiler version gcc  6.3.0
 
/// Accept_Number_Of_Rows_And_Columns_From_User_And_Display_Below_Pattern.

/// Input  : iRow = 3 iCol = 4 
/// Output : * # * # 
///          * # * # 
///          * # * # 
 
#include<stdio.h> 
#include<conio.h>

void Pattern(int iRow, int iCol) 
{
      int i = 0, j = 0;
      
      for( ; iRow > 0; iRow-- )
      {
            for( i = 1, j = 1; i <= iCol; i++, j++ )
            {
                  if( j % 2 != 0 )
                  {
                        printf("\t * ");
                  }
                  else
                  {
                        printf("\t # "); 
                  }
            }
            
            printf("\n");
      }
} 

int main() 
{
      int iValue1 = 0, iValue2 = 0; 
       
      printf("Enter Number Of Rows And Columns -> "); 
      scanf("%d%d",&iValue1,&iValue2); 
      
      Pattern( iValue1, iValue2 ); 
      
      getch();
      return 0; 
} 
