/// Input : 5
/// Output : A B C D E 

#include <stdio.h>
#include <conio.h>

void Pattern( int iNo )
{
            int i = 0;
            char ch = 'A';
            
            for( i = 1; i <= iNo; i++, ch++ )
            {
                        printf(" %c \t",ch);
            }
            
            return;
}

int main()
{
            int iValue = 0;
  
            printf("\n Enter Number Of Elements => ");
            scanf("%d",&iValue);
            
            Pattern( iValue );
            
            getch();
            return 0;
}
