/// Input  : Row = 3 Col = 5. 
/// Output : 5 4 3 2 1
///          5 4 3 2 1 
///          5 4 3 2 1

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
      int iR = 0, iC = 0, i = 0, j = 0;
      
      printf("\n Enter Number Of Rows => ");
      scanf("%d",&iR);
      
      printf("\n Enter Number Of Columns => ");
      scanf("%d",&iC);
      
      for( i = 0; i < iR; i++ )
      {
            printf("\n");
            
            j = iC;
            
            while( j > 0 )
            {
                  printf("%d \t ",j);
                  
                  j--;
            }
            
            printf("\n");
      }
      
      getch();
      return 0;
}
