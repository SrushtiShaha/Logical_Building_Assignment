// Compiler version gcc  6.3.0

/// Accept_Number_Of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern. 
/// Input  : iRow = 4 iCol = 5 
/// Output : 4 4 4 4 4 
///          3 3 3 3 3 
///          2 2 2 2 2 
///          1 1 1 1 1 

#include <stdio.h> 
#include <conio.h>

void Pattern( int iRow, int iCol ) 
{
      int i = 0, j = 0;
      
      for( i = iRow; i > 0; i-- )
      {
            for( j = 1; j <= iCol; j++ )
            {
                  printf("\t %d",i);  
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