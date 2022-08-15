/// Input  : 8
/// Output : 2 4 6 8 10 12 14 16

#include <stdio.h>
#include <conio.h>

void Pattern( int iNo )
{
            int i = 1;
            
            for( i = 1; iNo > 0; i++ )
            {
                        if( i % 2 == 0 )
                        {
                                    printf(" %d \t",i);
                                    iNo--;
                        }                                                
            }
          
            return;
}

int main()
{
            int iValue = 0;
            
            printf("\n Enter Number Of Element => ");
            scanf("%d",&iValue);
            
            Pattern( iValue );
            
            getch();
            return 0;
}
            