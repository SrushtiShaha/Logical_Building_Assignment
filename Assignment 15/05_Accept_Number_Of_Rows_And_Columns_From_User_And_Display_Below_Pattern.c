//Compiler version gcc  6.3.0

/// Accept Number Of Rows And Number Of Columns From User And Display Below Pattern. 
/// Input  : iRow = 3 iCol = 4 
/// Output : 1 1 1 1 
///          2 2 2 2 
///          3 3 3 3 

 
#include <stdio.h> 
#include <conio.h>

void Pattern( int iRow, int iColm ) 
{ 
      int i = 0, j = 0;
      
      for( i = 1; i <= iRow ; i++ )
      {
            for( j = 1; j <= iColm; j++ )
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
