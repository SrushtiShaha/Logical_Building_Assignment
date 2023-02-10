// Compiler version gcc  6.3.0

/// Accept_Number_Of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern. 
/// Input  : iRow = 4 iCol = 4 
/// Output : 2 4 6 8 10 
///          1 3 5 7  9 
///          2 4 6 8 10 
///          1 3 5 7  9 

#include <stdio.h> 
#include <conio.h>

void Pattern( int iRow, int iCol ) 
{ 
      int i = 2, j = 1;
      
      for( ; iRow > 0; iRow-- )
      {
            for( ; iCol > 0; iCol-- )
            {
                  while( i % 2 == 0 )
                  {
                        printf("%d \t",i);
                        i++;
                  }
                  
                  while( j % 2 != 0 )
                  {
                        printf("%d \t",j);
                        j++;
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