//Compiler version gcc  6.3.0

/// Accept_Number_Of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern. 
/// Input  : iRow = 4 iCol = 4 
/// Output : 1 2 3 4 
///          5 6 7 8 
///          9 1 2 3 
///          4 5 6 7 
 
#include <stdio.h> 
#include <conio.h>

void Pattern( int iRow, int iCol ) 
{ 
      int i = 0, j = 0, Num = 1;
      
      for( i = 1; i <= iRow; i++)
      {
            for( j = 1; j <= iCol; j++ )
            {
                  printf(" %d \t",Num);
                  
                  Num++;
                  
                  if( Num > 9 )
                  {                       
                         Num = 1;
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