// Compiler version gcc  6.3.0

/// Accept_Number_Of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern. 
/// Input  : iRow = 4 iCol = 4 
/// Output : A B C D 
///          A B C D 
///          A B C D 
///          A B C D 
 
#include <stdio.h> 
#include <conio.h>

void Pattern(int iRow, int iCol) 
{ 
      char ch = '\0';
      int i = 0, j = 0;
      
      for( i = 1; i <= iRow; i++ )
      {
            for( j = 1, ch = 'A'; j <= iCol; j++, ch++ )
            {
                  printf("\t %c",ch);
            }
            
            printf("\n");
      }
} 

int main() 
{
      int iValue1 = 0, iValue2 = 0; 
      
      printf("Enter number of rows and columns -> "); 
      scanf("%d%d",&iValue1,&iValue2); 
      
      Pattern( iValue1, iValue2 ); 
      
      getch();
      return 0; 
} 
