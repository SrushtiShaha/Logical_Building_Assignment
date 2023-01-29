/// Compiler version gcc  6.3.0

/// Accept_Number_of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern. 

/// Input  : iRow = 3 iCol = 5 
/// Output : 5 4 3 2 1
//           5 4 3 2 1 
///          5 4 3 2 1
 

#include <stdio.h> 
#include <conio.h>

void Pattern( int iRow, int iCol) 
{
      int i = 0, j = 0;
      
      for( i = 1; i <= iRow; i++ )
      {
            printf("\n");
            
            j = iCol;
            
            while( j > 0 )
            {
                  printf(" %d \t",j);
                  
                  j--;
            }
                        
            printf("\n");
      }    
} 

int main() 
{
      int iValue1 = 0, iValue2 = 0;
      
      printf("\n Enter number of rows and columns -> ");
      scanf("%d%d",&iValue1,&iValue2);
      
      Pattern( iValue1, iValue2 ); 
      
      getch();
      return 0; 
} 
