// Compiler version gcc  6.3.0

/// Accept_Number_Of_Rows_And_Number_Of_Columns_From_User_And_Display_Below_Pattern. 
/// Input  : iRow = 4 iCol = 4 
/// Output : A B C D 
///          a b c d 
///          A B C D 
///          a b c d 

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
                    if( i % 2 == 1 )
                    {
                          printf("%c",ch);
                    }
                    else
                    {
                          printf("%c",ch+32);
                    }
            }
            
            printf("\n");
      }      
} 
int main() 
{ 
  
      int iValue1 = 0, iValue2 = 0; 
      
      printf("Enter Number Of Rows And Columns -> "); 
      scanf("%d %d",&iValue1,&iValue2); 
      
      Pattern( iValue1, iValue2 ); 
      
      getch();
      return 0; 
} 
